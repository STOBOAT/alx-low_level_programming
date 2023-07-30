#include <stdio.h>

/**
 * first - Constructor function that is automatically executed before main.
 *
 * This function will be called automatically before the main function
 * is executed due to the __attribute__((constructor)) attribute.
 */
void first(void) __attribute__((constructor));
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
