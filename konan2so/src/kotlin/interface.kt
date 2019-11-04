data class User(val name: String, val age: Int)

fun foo(name: String?) {
	println("Hello, ${ User(name ?: "Unknown", 28) }")
}
