#include <stdio.h>
#include "lists.h"
/**
* listint_len - retunr list len
*@h: List of type print_listint
* Description: Return list len
* Return: size_t
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
