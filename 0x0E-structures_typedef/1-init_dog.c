#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct dog variable
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
