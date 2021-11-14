#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Print numbers from 0 to 14
 * Return: No return
 */

void more_numbers(void)
{
	int c, l;

	for (c = 1; c <= 10; c++)
	{
		for (l = 0; l <= 14; l++)
		{
			if (l >= 10)
			{
				putchar((1 / 10) + '0');
			}
			putchar((l % 10) + '0');
		}
		putchar('\n');
	}
}
