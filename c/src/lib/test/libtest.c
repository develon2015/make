#include <string.h>

#include "libtest.h"

const char *
getValue(const char *key) {
	if (strcmp("developer", key) == 0)
		return "Develon";
	return "Unknown";
}

