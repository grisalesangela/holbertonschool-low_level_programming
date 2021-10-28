#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - Create an array of chars
 * @size: size of memory to allocate
 * @c: string for the array
 * return: NULL if the size is 0 or the array is NULL,
 * and *array if it's succefull
 */
char *create_array(unsigned int size, char c)
{
	unsigned int counter;
	char *array;

	array = malloc(sizeof(c) * size);
	if (size > 1 && array != NULL)
	{
		for (counter = 0; counter < size; counter++)
			array[counter] = c;
		return (array);
	}
	else
		return (NULL);
}
