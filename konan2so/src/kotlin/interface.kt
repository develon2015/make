data class User(val name: String, val age: Int)

fun foo(name: String?) {
	println("Hello, ${ User(if (name == null || "".equals(name)) "Unknown" else name, 28) }")
}
