#include <stdio.h>

/**
 * bfrMain - prints before the main fucntion
 */

void __attribute__((constructor)) bfrMain(void)
{
	printf("You're beat! and yet, you must allow,\n%s",
			"I bore my house upon my back!\n");
}
