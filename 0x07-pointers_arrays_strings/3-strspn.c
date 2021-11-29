#include "main.h"
/**
 * _strspn - return the length of a string
 * @s: string to count
 * @accept: character searched
 * Return: no return value
 */
unsigned int _strspn(char *s, char *accept)
{
	char *pa = accept;
	int c = 0;

	while (*s != '\0')
	{
		for (accept = pa; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				c++;
				break;
			}
		}
		if (*accept == '\0')
			break;
		s++;
	}
	return (c);
}
