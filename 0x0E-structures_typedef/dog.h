#ifndef LEARN_DOG_H
#define LEARN_DOG_H
/**
* struct dog - Dog Struct
* @name: char *
* @age: char *
* @owner: char *
*/
struct dog
{
    char *name;
    char *owner;
    float age;
};
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
