#include "main.h"
/**
 * _memset - fill the first n bytes of the memory
 * @n: number of bytes to fill
 * @s: space in memory to fill
 * @b: value to be set
 * Return: pointer to the block of memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		s[c] = b;
		c++;
	}
	return (s);
}
