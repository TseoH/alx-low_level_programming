#include <stdlib.h>

/**
* malloc_checked - free malloc_checked
* @b: int
* Return: void *
*/
void *malloc_checked(unsigned int b)
{
	void *allocated;

	allocated = malloc(b);
	if (allocated == NULL)
	{
		exit(98);
	}
	return (allocated);
}
