#include "lists.h"

/**
* sum_listint - sum of element
*@head: Head of List of type listint_len
* Description: Return value
* Return: integer
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
