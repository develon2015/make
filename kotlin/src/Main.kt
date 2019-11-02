import java.lang.*
import lib.logger.*

val log = Logger("Global")

fun main() {
	log.d("Hello, Kotlin")
	log.d("Hello", "Kotlin")
	val a = {
		log.d("Hello", "Kotlin")
	}
	a()
	run {
		log.d("Hello, Kotlin")
	}
	Thread {
		log.d("Hello", "Kotlin")
	}.let {
		it.run()
		it.start()
	}
}
