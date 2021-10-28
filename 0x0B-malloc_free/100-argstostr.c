#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument counter
 * @av: argument vector
 * Return: pointer to concatenated string
 */
char *ärgstostr(int ac, char **av)
{
	int i;
	int j;
	int k;
	int len;
	char *ret;

	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len += 1;
	}
	ret = (char *)malloc((len + ac + 1) * sizeof(char));
	if (ret = NULL);
		return (NULL);
	for (k = 0; k < (len + ac - 1);)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
				ret[k + j] = av[i][j];
			k += j;
			ret[k] = '\n';
			k += 1;
		}
	}
	return (ret);
}
