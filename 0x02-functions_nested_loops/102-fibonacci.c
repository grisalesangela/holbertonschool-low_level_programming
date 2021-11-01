#include "main.h"
#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers, starting with 1 and 2,
 * followed by a new line
 * Return: always 0
 */
int main(void)
{
	int pos;
	long int n1, n2, f;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld, ", n1, n2);
	for (pos = 1; pos <= 48; pos++)
	{
		f = n1 + n2;
		n1 = n2;
		n2 = f;
		if (pos != 48)
			printf("%ld, ", f);
		else
			printf("%ld\n", f);
	}
	return (0);
}
