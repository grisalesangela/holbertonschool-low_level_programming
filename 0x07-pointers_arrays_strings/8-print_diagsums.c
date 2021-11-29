#include "main.h"
/**
 * print_diagsums - print the sum of the two diagonals
 * @a: pointer to the array
 * @size: number of rows and columns of the array
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int f = 0, sum_d1 = 0, sum_d2 = 0;

	while (f < size)
	{
		sum_d1 += a[(f * size) + f];
		f++;
	}
	f = 1;
	while (f <= size)
	{
		sum_d2 += a[(f * size) - f];
		f++;
	}
	printf("%d, %d\n", sum_d1, sum_d2);
}
