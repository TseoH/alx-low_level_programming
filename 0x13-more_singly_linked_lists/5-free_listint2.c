#include "lists.h"

/**
* free_listint2 - Free list
*@head: Head of List of type listint_len
* Description: Return Void
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *current;

	if(head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	head = NULL;
}
