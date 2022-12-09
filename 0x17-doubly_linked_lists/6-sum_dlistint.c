#include "lists.h"

/**
 * sum_dlistint - Sum
 * @head: HEAD
 *
 * Return: integer
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
