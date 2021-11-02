#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dog - prints a structure dog
 * @d: struct to print
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("name: %s\n", d->name);
		else
			printf("name: (nil)");
		if (d->age >= 0)
			printf("age: %f\n", d->age);
		else
			printf("age: (nil)");
		if (d->owner != NULL)
			printf("owner: %s\n", d->owner);
		else
			printf("owner: (nil)");
	}
}
