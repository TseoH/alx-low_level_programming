#include "lists.h"

/**
 * dlistint_len -  linked dlistint_t len
 * @h: HEAD
 *
 * Return: dlistint_t list len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
