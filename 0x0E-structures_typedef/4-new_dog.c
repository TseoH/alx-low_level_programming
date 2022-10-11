#include <stdlib.h>
#include <string.h>
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

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return  (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (strlen(owner)));
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * (strlen(name)));
	if(new_dog->name == NULL)
	{
		free(new_dog->name);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);
	strcpy(new_dog->name, name);
	return (new_dog);
}
