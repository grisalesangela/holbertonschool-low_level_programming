#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers
 * @n: input to calculate
 * Return: list result
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	printf("%d\n", n);
}
