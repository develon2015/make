.ONESHELL:
SHELL := /bin/bash
Target := bin/exe
Proxy := makefile_proxy

.PHONY: help
help:
	@
	echo 'make帮助'
	echo '	1. make all	-> 生成build文件并执行构建'
	echo '	2. make clean	-> 清理生成的文件'

.PHONY: all
all: $(Proxy) | bin
	@
	echo -n 开始构建?
	read
	make -f $(Proxy)

$(Proxy): src
	@
	echo '制定$@'
	codefs=$$(echo $$(find src -regex '.*\.c$$'))
	echo 找到源文件 $$codefs
	headfs=$$(echo $$(find src -regex '.*\.h$$'))
	echo 找到头文件 $$headfs
	headds=$$(echo $$(dirname $$headfs | uniq))
	echo 头文件搜索路径 $$headds
	echo "$(Target): $$codefs" > $@
	echo "	\$$(CC) -o \$$@ -I $${headds// / -I } \$$^" >> $@
	echo '已生成$@文件, 内容如下:'
	cat $@

bin:
	mkdir bin

.PHONY: clean
clean:
	rm -rf $(Proxy) $(Target)

#-include $(Proxy)

