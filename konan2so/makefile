.PHONY: ALL
ALL: bin/libdynamic.so a.out

bin/libdynamic.so: src/kotlin/interface.kt | bin
	konanc -o $@ $^ -p dynamic

a.out: src/c/main.c bin/libdynamic.so
	$(CC) -o $@ $^ -Ibin

bin:
	mkdir bin

.PHONY: clean
clean:
	rm -rf bin a.out
