#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
* listint_len - Add to list
*@head: Head of List of type listint_len
*@n: number for new nod
* Description: Return node
* Return: listint_t
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
}
