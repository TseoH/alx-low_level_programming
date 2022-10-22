#include <string.h>
#include "lists.h"
/**
* free_list - free list of node
*@head: Head List of type list_t
* Description: free list
* Return: void
*/
void free_list(list_t *head)
{
	list_t *current;
	while (head != NULL)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
