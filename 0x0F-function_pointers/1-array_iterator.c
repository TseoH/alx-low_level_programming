#include "function_pointers.h"

/**
 * array_iterator - array_iterator
 * @array: array
 * @size: array size.
 * @action: pointer function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
