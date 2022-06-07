#include <main.h>

/**
 * print_alphabet - function that prints the alphabet, lowercase
 * You can only use _putchar twice in your code
 * Return: nothing.
 */

void print_alphabet(void)
{
	int l;
	int n = 0;

	while (n < 10)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l += 1;
		}
		_putchar(10);
		n += 1;
	}
}
