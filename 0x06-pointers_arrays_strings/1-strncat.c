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
 * _strncat - concatenates two strings, with at most n bytes from src
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: bytes to take from src
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int lendest;
	int lensrc;
	int i;

	lendest = _strlen(dest);
	lensrc = _strlen(src);
	i = 0;
	while (i < n && i < lensrc)
	{
		*(dest + lendest) = *(src + i);
		lendest++;
		i++;
	}
	return (dest);
}
