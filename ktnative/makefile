BIN := ./bin/libtest.so
EXE := ./a.out
KLIB := ./bin/libtest.klib

.PHONY: ALL
ALL: $(BIN) $(EXE)

$(BIN): $(wildcard src/c/libtest/*.c) | bin
	@echo 生成libtest.so
	$(CC) -o $@ -shared $^

$(KLIB): libtest.def
	cinterop -def $^ -o $(KLIB)

$(EXE): $(wildcard src/kt/**.kt) | $(BIN) $(KLIB)
	konanc -o $@ $^ -l $(KLIB) -linker-options $(BIN)
	mv $@.kexe $@

bin:
	mkdir bin

.PHONY: clean
clean:
	rm -rf $(BIN) $(EXE) bin
