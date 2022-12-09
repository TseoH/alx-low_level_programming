#include "lists.h"

/**
 * print_dlistint - Prints dlistint_t list
 * @h: HEAD
 *
 * Return: nodes in the list len
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
