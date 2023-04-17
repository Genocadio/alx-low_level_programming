#include "dog.h"
/**
 * init_dog - function to initialize the variable of type struct_dog
 * @d: pointer to struct_dog
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

