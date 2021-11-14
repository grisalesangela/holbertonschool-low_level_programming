#include "main.h"
#include <stdio.h>

/**
 * print_line - drawing straight lines
 * @n: how long the line would be
 * Return: no return
 */

void print_line(int n)
{
	int l;

	for (l = 1; l <= n; l++)
	{
		putchar ('_');
	}
	putchar('\n');
}
