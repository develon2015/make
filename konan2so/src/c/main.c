#include "libdynamic_api.h"

int
main(int argc, char *argv[]) {
	libdynamic_symbols()->kotlin.root.foo(argv[1]);
	return 0;
}
