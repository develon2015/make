import platform.posix.*
import libtest.*

fun main() {
	println("str -> ${ getString() }...")
}

fun foo() {
	val sockfd = socket(AF_INET, SOCK_STREAM, 0)
	val va = listOf(1, 2, 3, 4).filter{ it != 2 }.map{ it*it }
	for (v in va) printf("%d\n", v)
}
