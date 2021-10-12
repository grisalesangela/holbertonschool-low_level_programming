#include "main.h"
/**
 * puts_half - print half of a string
 * @str: Input
 * Return: no return
 */
void puts_half(char *str)
{
	int c = 0;

	while (*(str + c))
		c++;
	if (c % 2 == 0)
		c = c / 2;
	else
	{
		c = (c - 1) / 2;
		c++;
	}
	while (*(str + c) != ('\0'))
	{
		_putchar(*(str + c));
		c++;
	}
	_putchar('\n');
}
