#include <string.h>
#include "lists.h"
/**
* add_node_end - add node to end of list
*@head: List of type list_t
*@str: str for new nod
* Description: Add node in list
* Return: list_t
*/
list_t *add_node_end(list_t **head, const char *str)
{
	char *_str;
	int len;
	list_t *last_node_in_list;
	list_t *new_node;

	_str = strdup(str);
	if (_str == NULL)
	{
		free(_str);
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	len = strlen(_str);
	new_node->str = _str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node_in_list = *head;
		while (last_node_in_list != NULL)
		{
			last_node_in_list = last_node_in_list->next;
		}
		last_node_in_list->next = new_node;
	}
	return (*head);
}
