#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print a triangle
 * @size: how big the triangle would be
 * Return: no return
 */
void print_triangle(int size)
{
	int c, l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (c = 1; c <= size; c++)
	{
		for (l = 1; c <= size; l++)
		{
			if (l <= (size - c))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
