#include <stdio.h>
#include "lists.h"
/**
* print_listint - print list contain
*@h: List of type print_listint
* Description: print list contain
* Return: size_t
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
