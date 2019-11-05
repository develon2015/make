#include "libdynamic_api.h"
#include <stdio.h>

int
main(int argc, char *argv[]) {
	libdynamic_ExportedSymbols* libdynamic = libdynamic_symbols();
	libdynamic -> kotlin.root.foo(argv[1]);
	libdynamic -> kotlin.root.foo(NULL);
	printf("%s\n", libdynamic -> kotlin.root.User.toString(
		libdynamic -> kotlin.root.User.User("张三", 18)) );
	return 0;
}
