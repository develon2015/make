package lib.logger

class Logger(val name: String) {
	fun d(msg: Any, title: Any = "") {
		val trace = Thread.currentThread().getStackTrace()[3]
		val output = """
debug@$name ${ trace.getFileName() }:${ trace.getLineNumber() } ${ trace.getClassName() } # ${ trace.getMethodName() }()
${ if ("".equals(title)) "" else "$title -> " }$msg
""".trimMargin()
		println("-------------------")
		println(output)
		println("-------------------")
	}
}
