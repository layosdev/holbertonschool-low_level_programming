#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function to print a list of nodes
 *
 * @h: nodo.
 *
 * Return: size
 */
size_t print_listint(const listint_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}

	for (i = 1; h->next != NULL; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}

	printf("%i\n", h->n);

	return (i);
}
