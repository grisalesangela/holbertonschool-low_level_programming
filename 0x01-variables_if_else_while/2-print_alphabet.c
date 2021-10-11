#include <stdio.h>
/**
 * main -prints the alphabet in lowercase.
 *
 * Return: 0
 */
int main(void)
{
	int ch = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
