#include "main.h"
/**
 * _strpbrk - locate the first occurrence in a string
 * @s: string to search
 * @accept: character to be match
 * Return: pointer since the first occurrence
 */
char *_strpbrk(char *s, char *accept)
{
	char *a = accept;

	while (*s != '\0')
	{
		for (accept = a; *accept != '\0'; accept++)
		{
			if (*s == *accept)
				return (s);
		}
		s++;
	}
	return (NULL);
}
