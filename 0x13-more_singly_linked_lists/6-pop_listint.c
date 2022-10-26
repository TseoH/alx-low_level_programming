#include "lists.h"

/**
* pop_listint - pop first element in list
*@head: Head of List of type listint_len
* Description: Return value
* Return: void
*/
int pop_listint(listint_t **head)
{
	listint_t *next;
	int n;

	if (head == NULL)
	{
		return (0);
	}
	next = (*head)->next;
	n = (*head)->n;
	free((*head));
	(*head) = NULL;
	(*head) = next;
	return (n);

}
