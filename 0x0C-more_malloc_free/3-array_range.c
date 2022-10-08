#include <stdlib.h>
#include <string.h>

/**
* array_range - print array_range
* @min: int
* @max: int
* Return: int *
*/
int *array_range(int min, int max)
{
	int *array;
	int len;
	int i;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	array = malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		array[i - min] = i;
	}
	return (array);
}
