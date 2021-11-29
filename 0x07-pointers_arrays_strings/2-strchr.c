#include "main.h"
/**
 * _strchr - search the occurrence of a character
 * @s: string in which to search
 * @c: character searched
 * Return: pointer on the first occurrence
 */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s != c)
		return (NULL);
	return (s);
}
