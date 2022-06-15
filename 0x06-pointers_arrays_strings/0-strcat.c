#include "main.h"

/**
 * _strcat- function that concatenates two strings.
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest++)
		;
	dest--;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}
