#include "main.h"
#include <stdio.h>
/**
 * times_table - print the times tables
 * Return: no return
 */
void times_table(void)
{
	int m, f, p;

	for (m = 0; m <= 9; m++)
	{
		_putchar(48);
		for (f = 1; f <= 9; f++)
		{
			p = m * f;
			_putchar(44);
			_putchar(32);
			if (p <= 9)
			{
				_putchar(32);
				_putchar(p + 48);
			}
			else
			{
				_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
