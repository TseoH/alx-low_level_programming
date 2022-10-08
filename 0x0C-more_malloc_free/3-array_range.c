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
	int _min;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min;
	if (len < 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (len + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	_min = min;
	if (len == 0)
	{
		array[0] = max;
		return (array);
	}
	for (i = 0; i <= max; ++i)
	{
		array[i] = _min++;
	}
	return (array);
}
