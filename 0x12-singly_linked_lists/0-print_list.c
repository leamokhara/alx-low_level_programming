#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of a list
 * @h: the pointer that points to the struct.
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	count = 1;
	printf("[%d] %s\n", h->len, h->str);
	if (h->next != NULL)
		count += print_list(h->next);
	return (count);
}
