#include "main.h"
/**
 * set_string - set the value of a pointer to a char
 * @s: pointer to a char
 * @to: char to be pointer to
 * Return: no return
 */
void set_string(char **s, char *to)
{
	*s = to;
}
