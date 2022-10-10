#include <stdio.h>
#include "dog.h"

/**
* init_dog - print init_dog
* @d: struct dog
* @name: char *
* @age: float
* @owner: char *
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->owner = owner;
	d->age = age;
}
