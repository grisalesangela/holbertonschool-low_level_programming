#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check for digits 0 through 9
 * @c: input digit
 * Return: 1 if is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
