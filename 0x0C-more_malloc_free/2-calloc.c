#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: amount of elements of the array
 * @size: size of each element
 * Return: pointer to the allocated memory, or NULL in fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ret;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ret = malloc(nmemb * size);
	if (ret == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ret[i] = 0x00;
	return (ret);
}
