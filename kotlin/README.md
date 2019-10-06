makefile如何工作
---

```bash
d@MyServer: ~/git/make/kotlin $ make
查找源文件 src/Main.kt
生成makefile代理文件makefile_proxy,内容如下:
bin/MainKt.class: src
        kc -cp bin -d bin src/Main.kt
mkdir bin
开始构建目标bin/MainKt.class
make[1]: Entering directory '/home/d/git/make/kotlin'
kc -cp bin -d bin src/Main.kt
make[1]: Leaving directory '/home/d/git/make/kotlin'
d@MyServer: ~/git/make/kotlin $ make run
jk -cp bin MainKt
Hello, Kotlin
```
