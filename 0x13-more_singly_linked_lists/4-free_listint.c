#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - Free list
*@head: Head of List of type listint_len
* Description: Return Void
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
