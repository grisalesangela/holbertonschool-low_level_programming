#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *malloc_checked - check the code allocates memory
 *@b: bytes to allocate
 *Return: pointer to the allocated memory or 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *ret;
	ret = malloc(b);
	if (ret == NULL)
		exit(98);
	return (ret);
}
