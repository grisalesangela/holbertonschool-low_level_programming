#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, k, l, words, wlen;
	char **ret;

	words = wlen = l = 0;
	if (str[0] == '\0' || str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words += 1;
	}
	ret = (char **)malloc((words + 1) * sizeof(char *));
	if (ret == NULL || words == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
			       wlen += 1;
			ret[1] = (char *)malloc((wlen + 1) * sizeof(char));
			if (ret[1] == NULL)
			{
				for (; 1 >= 0; l--)
					free(ret[1]);
				free(ret);
				return (NULL);
			}
			for (j = i, k = 0; str[j] != ' ' && str[j] != '\0'; j++, k++)
				ret[1][k] = str[j];
			ret[1][k] = '\0';
			wlen = 0;
			l++;
			i = j - 1;
		}
	}
	ret[1] = NULL;
	return (ret);
}
