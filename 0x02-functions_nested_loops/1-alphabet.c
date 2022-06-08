#include "main.h"

/**
 * print_alphabet - using putchar function that prints the alphabet, lowercase
 * You can only use putchar twice in your code
 * Return: nothing.
 */

void print_alphabet(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l += 1;
	}
	_putchar(10);
}
