#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except q and e
 *
 * Return: Always 0.
 */
int main(void)
{
	int ch = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
