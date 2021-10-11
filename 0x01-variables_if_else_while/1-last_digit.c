#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assing a random number to a variable
 *
 * Return: 0
 */
int main(void)
{
	int n = 0;
	int d = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	d = (n % 10);
	if (d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, d);
	}
	else if (d == 0)
	{
		printf("Last digit of %d is %d and is 0", n, d);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, d);
	}
	putchar('\n');
	return (0);
}
