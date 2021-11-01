#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - print every minute of a day
 * Return: no return
 */
void jack_bauer(void)
{
	int h, m, hi, hd, mi, md;

	for (h = 0; h < 24; h++)
	{
		hi = h / 10;
		hd = h % 10;
		for (m = 0; m < 60; m++)
		{
			mi = m / 10;
			md = m % 10;
			_putchar('0' + hi);
			_putchar('0' + hd);
			_putchar(':');
			_putchar('0' + mi);
			_putchar('0' + md);
			_putchar('\n');
		}
	}
}
