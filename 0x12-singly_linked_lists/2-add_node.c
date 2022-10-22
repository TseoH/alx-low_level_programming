#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
* add_node - add node to list node
*@head: Head of List of type list_t
* Description: Add node in list
* Return: list_t
*/
list_t *add_node(list_t **head, const char *str)
{
	char *_str;
	int _str_len;
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
		return (NULL);
	}
	_str_len = strlen(_str);
	new_node->str = _str;
	new_node->len = _str_len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
