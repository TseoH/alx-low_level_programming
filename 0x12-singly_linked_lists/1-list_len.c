#include <stdio.h>
#include "lists.h"
/**
* list_len - print list len
*@h: List of type list_t
* Description: print list len
* Return: size_t
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
