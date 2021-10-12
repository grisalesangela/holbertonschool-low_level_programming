#include "main.h"
#include <stdio.h>
/**
 * print_array - prints x elements of an integer array, then a new line
 * @a: painter to array to print
 * @n: number of elements of the array to be printed
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", *(a + i));
	}
	if (n > 0)
		printf("%d\n", *(a + (n - 1)));
	else
		printf("\n");
}
