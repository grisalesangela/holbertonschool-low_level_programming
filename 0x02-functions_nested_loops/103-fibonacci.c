#include "main.h"
#include <stdio.h>
/**
 * main - prints the sum of even fibonacci terms less than 4000000
 * followed by a new line
 * Return: always 0;
 */
int main(void)
{
	long int n1, n2, s, f;

	n1 = 1;
	n2 = 2;
	s = 2;
	f = n1 + n2;
	while (f < 4000000)
	{
		f = n1 + n2;
		n1 = n2;
		n2 = f;
		if ((f % 2) == 0)
			s = s +f;
	}
	printf("%ld\n", s);
	return (0);
}
