#include <stdio.h>
#include <stdlib.h>

/**
*create_array - printf create_array
*
*Description: create_array print
*@size: Integer
*@c: String array
*Return: Return a value
*/
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(size) * size);
	for (i = 0; i < size; ++i)
	{
		array[i] = c;
	}
	return (array);
}
