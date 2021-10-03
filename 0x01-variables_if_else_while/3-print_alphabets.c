#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and uppercase
(*
 * Return: 0
 */
int main (void)
{
	int ch = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
