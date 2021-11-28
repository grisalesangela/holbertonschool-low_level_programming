#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to string to measure
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (*(s + i) != '\0')
	{
		len = len + 1;
		i++;
	}
	return (len);
}

/**
 * _strncpy - copies a string with at most n bytes from src
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: bytes to take from src
 * Return: pointer to resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int lensrc;
	int lendest;
	int i;

	lensrc = _strlen(src);
	lendest = _strlen(dest);
	i = 0;
	while (i < n && i < lendest)
	{
		if (*(dest + i) >= '\0' && i < lensrc)
			*(dest + i) = *(src + i);
		else
			*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
