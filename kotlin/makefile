.ONESHELL:
SHELL := /bin/bash
Target := bin/MainKt.class
Proxy := makefile_proxy
KC := kc
JK := jk
CP := -cp bin


.PHONY: all
all: $(Proxy) | bin
	@
	echo 开始构建目标$(Target)
	make -f $<

$(Proxy): src
	@
	codefs=$$(echo $$(find src -regex '.*\.kt$$'))
	echo 查找源文件 $$codefs
	echo 生成makefile代理文件$@,内容如下:
	echo "$(Target): $$codefs" > $@
	echo "	$(KC) $(CP) -d bin "'$$^' >> $@
	echo "	touch bin" >> $@
	echo "" >> $@
	echo ".PHONY: up" >> $@
	echo "up: bin" >> $@
	echo "" >> $@
	echo "bin: $$codefs" >> $@
	echo "	$(KC) $(CP) -d bin "'$$?' >> $@
	echo "	touch bin" >> $@
	cat $@

bin:
	mkdir bin

.PHONY: run
run:
	$(JK) $(CP) MainKt

.PHONY: up
up: $(Proxy)
	make -f $< up

.PHONY: clean
clean:
	rm -rf bin/* $(Proxy)
