#include <stdio.h>

#include "libtest.h"
#include "libtest2.h"
#include "libtest3.h"

int
main(int argc, const char *argv[]) {
	const char *key = "developer";
	printf("%s -> %s\n", key, getValue(key)); 

	key = "version";
	printf("%s -> %s\n", key, getValue(key)); 

	test();
	test2();

	return 0;
}

