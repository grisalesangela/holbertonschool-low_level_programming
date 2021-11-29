#include "main.h"
/**
 * _memcpy - copy n numbers of characters from memory
 * @n: number of characters to copy
 * @src: source of data to copy
 * @dest: destination of the copy
 * Return: pointer to destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
