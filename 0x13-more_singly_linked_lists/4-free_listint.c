#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - Free list
*@head: Head of List of type listint_len
* Description: Return Void
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *incoming;

	incoming = *head;
	while (incoming != NULL)
	{
		current = incoming->next;
		free(incoming);
		incoming = current;
	}
}
