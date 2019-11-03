.ONESHELL:
SHELL := /bin/bash
Target := go
Proxy := makefile_proxy
KC := kotlin-native
JK := kotlin-native
CP := -cp bin


.PHONY: all
all: $(Proxy)
	@
	echo 开始构建目标$(Target)
	make -f $<

$(Proxy): src
	@
	codefs=$$(echo $$(find src -regex '.*\.kt$$'))
	echo 查找源文件 $$codefs
	echo 生成makefile代理文件$@,内容如下:
	echo "$(Target): $$codefs" > $@
	echo "	$(KC) -o "'$$@ $$^' >> $@
	cat $@

.PHONY: run
run:
	$(JK) ./$(Target)

.PHONY: clean
clean:
	rm -rf $(Target) $(Proxy)
