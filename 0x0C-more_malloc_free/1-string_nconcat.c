#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings
 *@s1: prefix string
 *@s2: suffix string
 *n: characters to take from s2
 *Return: pointer to a new space contaning s1 and n bytes of n2,
 *ended by a NULL character
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, len1, len2;
	char *ret;

	len1 = len2 = 0;
	if (s1 == NULL)
	{
		s1 = malloc (1);
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(1);
		s2 = '\0';
	}
	for (i = 0; s1[i] != '\0'; i++)
		len1 += 1;
	for (j = 0; s2[j] != '\0'; j++)
		len2 += 1;
	if (n > len2)
		n = len2;
	ret = malloc((len1 + n) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	for (i = 0, k = 0; s1[i] != '\0'; i++, k++)
		ret[k] = s2[j];
	ret[k] = '\0'
	return (ret);
}
