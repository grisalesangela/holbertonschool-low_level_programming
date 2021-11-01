#include "main.h"
#include <stdio.h>
/**
 * main - prints "_putchar"
 * Return: always 0
 */
int main(void)
{
	char *p = "_putchar\n";

	while (*p)
	{
		_putchar(*p++);
	}
	return (0);
}	
