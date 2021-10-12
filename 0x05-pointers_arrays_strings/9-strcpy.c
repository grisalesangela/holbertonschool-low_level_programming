#include "main.h"
/**
 * _strcpy - copy strings
 * @dest: copy string location
 * @src: Input string
 * Return: string copy location
 */
char *_strcpy(char *dest, char *src)
{
	int e;
	for (e = 0; src[e]; e++)
	{
		dest[e] = src[e];
	}
	dest[e] = src[e];
	return (dest);
}
