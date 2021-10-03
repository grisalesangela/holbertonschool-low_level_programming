#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int digit = 0;
	char ch = 0;

	for (digit = 0; digit < 10; digit++)
	{
		putchar((digit % 10) + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
