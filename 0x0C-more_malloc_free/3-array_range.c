#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers
 * @min: lower limitof the array, included
 * @max: higher limit of the array, included
 * Return: pointer to the created array
 */

int *array_range(int min, int max)
{
	int *ret;
	int i;

	if (min > max)
		return (NULL);
	ret = malloc(sizeof(int) * (max - min + 1));
	if (ret == NULL)
		return (NULL);
	for (i = 0; (min + i) <= max; i++)
		ret[i] = min + i;
	return (ret);
}
