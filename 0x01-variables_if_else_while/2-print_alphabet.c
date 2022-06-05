#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 */

int main()
{
	for(int x = 'A'; x <= 'Z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	return 0;
	}
