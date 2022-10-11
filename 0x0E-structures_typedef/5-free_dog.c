#include <stdlib.h>
#include "dog.h"

/**
* free_dog - print free_dog
* @d: struct dog
* Return: void
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
