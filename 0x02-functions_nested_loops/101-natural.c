#include "main.h"
#include <stdio.h>
/**
 * main - print multiples of 3 or 5
 * Return: always 0
 */
int main(void)
{
	int m, p;

	for (m = 1; m < 1024; m++)
	{
		if ((m % 3) == 0 || (m % 5) == 0)
		{
			p += m;
		}
	}
	printf("%d\n", p);
	return (0);
}
