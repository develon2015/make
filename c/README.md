makefile如何工作?
---

```bash
d@MyServer: ~/git/make/c $ make
make帮助
        1. make all     -> 生成build文件并执行构建
        2. make clean   -> 清理生成的文件
d@MyServer: ~/git/make/c $ make all
制定makefile_proxy
找到源文件 src/lib/test/libtest.c src/lib/test2/libtest2.c src/main.c
找到头文件 src/lib/test/libtest.h src/lib/test2/libtest2.h src/lib/test2/libtest3.h
头文件搜索路径 src/lib/test src/lib/test2
已生成makefile_proxy文件, 内容如下:
bin/exe: src/lib/test/libtest.c src/lib/test2/libtest2.c src/main.c
        $(CC) -o $@ -I src/lib/test -I src/lib/test2 $^
mkdir bin
开始构建?
make[1]: Entering directory '/home/d/git/make/c'
cc -o bin/exe -I src/lib/test -I src/lib/test2 src/lib/test/libtest.c src/lib/test2/libtest2.c src/main.c
make[1]: Leaving directory '/home/d/git/make/c'
```
