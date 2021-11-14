#include "main.h"
#include <stdlib.h>

/**
 * print_numbers - prints number n (from -99999 to 99999)
 * @n: number to print
 * return: always 0
 */

void print_numbers(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}
	if (n >= 10000 || n <= -10000)
	{
		int a;
		int b;
		int c;
		int d;
		int e;

		a = abs(n) / 10000;
		b = (abs(n) % 10000) / 1000;
		c = (abs(n) % 1000) / 100;
		d = (abs(n) % 100) / 10;
		e = abs(n) % 10;
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar(e + '0');
	}
	else if (n >= 1000 || n <= -1000)
	{
		int a;
		int b;
		int c;
		int d;

		a = abs(n) / 1000;
		b = (abs(n) % 1000) / 100;
		c = (abs(n) % 100) / 10;
		d = abs(n) % 100;
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(c + '0');
		_putchar(d + '0');
	}
	else if (n >= 100 || n <= -100)
	{
		int a;
		int b;
		int c;

		a = abs(n) / 100;
		b = (abs(n) % 100) / 10;
		c = abs(n) % 10;
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(c + '0');
	}
	else if (n >= 10 || n <= -10)
	{
		int a;
		int b;

		a = abs(n) / 10;
		b = abs(n) % 10;
		_putchar(a + '0');
		_putchar(b + '0');
	}
	else
	{
		_putchar(abs(n) + '0');
	}
}
