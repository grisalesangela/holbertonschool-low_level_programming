#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print the last digit of a number
 * @j: number to check
 * Return: last digit
 */
int print_last_digit(int j)
{
	int p, f = j % 10;

	if (f < 0)
	{
		p = (f * -1);
		_putchar(p + '0');
		return (p);
	}
	else
	{
		_putchar(f + '0');
		return (f);
	}
}
