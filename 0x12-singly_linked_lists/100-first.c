#include <stdio.h>

void printStatement(void) __attribute__ ((constructor));

/**
 * first - prints something before main
 */
void printStatement(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
