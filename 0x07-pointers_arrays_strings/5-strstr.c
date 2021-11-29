#include "main.h"
#include <stdlib.h>
/**
 * _strstr - find first occurrence of a substring
 * @haystack: string in which look at
 * @needle: target to locate
 * Return: beginning of lovated string or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*haystack != '\0')
	{
		haystack = h;
		n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		h = haystack + 1;
	}
	return (NULL);
}
