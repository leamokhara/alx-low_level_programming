#include "lists.h"

/**
 * print_listint - this function prints all the elements of a list
 * @h: the pointer that points to the struct
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d/n", h->n);
			h = h->next;
		count++;
	}
	return (count);
}
