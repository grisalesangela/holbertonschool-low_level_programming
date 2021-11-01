#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print n times table
 * @n: input
 * Return: no return
 */
void print_times_table(int n)
{
	int c, f, p;

	if ((n >= 0) && (n < 15))
	{
		for (c = 0; c <= n; c++)
		{
			_putchar(48);
			for (f = 1; f <= n; f++)
			{
				p = c * f;
				_putchar(44);
				_putchar(32);
				if (p <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(p + 48);
				}
				else if (p <= 99)
				{
					_putchar(32);
					_putchar((p / 10) + 48);
					_putchar((p % 10) + 48);
				}
				else
				{
					_putchar(((p / 100) % 10) + 48);
					_putchar(((p / 10) % 10) + 48);
					_putchar((p % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
