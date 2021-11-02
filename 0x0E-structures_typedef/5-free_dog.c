#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: dog to free
 */

void free_dog(dog_t *d)
{
	free(d);
}
