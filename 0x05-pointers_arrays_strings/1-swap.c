#include "main.h"
/**
 * swap_int -swaps values of two integers
 * @a: pointer to a
 * @b: pointer to b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
