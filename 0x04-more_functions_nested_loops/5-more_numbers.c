#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print numbers from 0 to 14
 * Return: no return
 */

void more_numbers(void)
{
	int c, l;

	for (c = 1; c <= 10; c++)
	{
		for (l = 0; 1 <= 14; l++)
		{
			if (1 >= 10)
			{
				putchar((1 / 10) + '0');
			}
			putchar((1 % 10) + '0');
		}
		putchar('\n');
	}
}
