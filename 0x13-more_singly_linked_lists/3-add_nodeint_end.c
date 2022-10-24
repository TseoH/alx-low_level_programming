#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint_end - Add to list end
*@head: Head of List of type listint_len
*@n: number for new nod
* Description: Return node
* Return: listint_t
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	new_node = malloc(sizeof(listint_t));
	if(new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	last_node = *head;
	if (last_node == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last_node != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;
	return (*head);
}
