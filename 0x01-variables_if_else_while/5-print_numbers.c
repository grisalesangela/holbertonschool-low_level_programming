#include <stdio.h>
/**
 * main - Prints the numbers starting in 0 in base 10.
 *
 * Return: 0.
 */
int main(void)
{
	char digit = 0;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
