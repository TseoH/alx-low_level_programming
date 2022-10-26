#include "lists.h"

/**
* insert_nodeint_at_index - insert element a index
*@head: Head of List of type listint_len
* Description: Return value
* Return: listint_t
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;
	unsigned int node = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current = *head;
	if (idx == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (new_node);
	}
	while (node < (idx - 1))
	{
		node++;
		if (current == NULL || current->next == NULL)
		{
			return (NULL);
		}

		current = current->next;
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
