#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - print new_dog
* @name: char *
* @age: float
* @owner: char *
* Return: dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char _name;
	char _owner;
	dog_t *new_dog;

	_name = *name;
	_owner = *owner;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return  (NULL);
	}
	new_dog->age = age;
	new_dog->owner = &_name;
	new_dog->name = &_owner;
	return (new_dog);
}
