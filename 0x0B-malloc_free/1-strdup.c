#include "main.h"
/**
 * _strdup - Duplicate a string
 * @str: string to duplicate
 * ReturN: Pointer to copied string
 */
char *_strdup(char *str)
{
	unsigned int str_size = 0;
	char *dup_str, *make_dup;

	if (str != NULL)
	{
		while (str[str_size])
			str_size++;
	}
	else
		return (NULL);

	dup_str = malloc(sizeof(char) * str_size + 1);

	if (dup_str == NULL)
		return (NULL);

	make_dup = dup_str;
	while (*str)
	{
		*make_dup = *str;
		make_dup++, *str++;
	}
	return (dup_str);
}
