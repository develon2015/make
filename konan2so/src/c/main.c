#include "libdynamic_api.h"

int
main() {
	libdynamic_symbols()->kotlin.root.foo();
	return 0;
}
