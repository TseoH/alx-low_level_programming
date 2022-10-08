#include <stdlib.h>
#include <string.h>

/**
* _calloc - free _calloc
* @nmemb: char
* @size: char
* Return: void *
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;
	unsigned int len;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	len = nmemb * size;
	for (i = 0; i < len; ++i)
	{
		array[i] = 0;
	}
	return (array);

}
