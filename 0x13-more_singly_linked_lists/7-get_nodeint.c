#include "lists.h"

/**
* get_nodeint_at_index - element at index
*@head: Head of List of type listint_len
*@index: an integer
* Description: Return value
* Return: listint_t
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *value;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	if (index == 0)
	{
		return (head);
	}

	while (i < index)
	{
		i++;
		if (head != NULL)
		{
			head = head->next;
			value = head;
		}
		else
		{
			value = NULL;
			break;
		}
	}
	return (value);
}
