#include "libdynamic_api.h"
#include <stdio.h>

int
main(int argc, char *argv[]) {
	libdynamic_symbols()->kotlin.root.foo(argv[1]);
	printf("%s\n", libdynamic_symbols()->kotlin.root.User.toString(libdynamic_symbols()->kotlin.root.User.User("张三", 18)) );
	return 0;
}
