#include <stdio.h>

void Myfun(void) __attribute__ ((constructor));

/**
 * Myfun - Execute this code before the main function
 * to print a sentence.
 */

void Myfun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
