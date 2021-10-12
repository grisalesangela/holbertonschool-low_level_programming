#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to be modified
 * Return: void
 */
void rev_string(char *s)
{
	int n, g, e;
	char *a, aux;
	a = s;
	while (s[g] != '\0')
	{
		g++;
	}
	for (e = 1; e < g; e++)
	{
		a++;
	}
	for (n = 0; n < (c / 2); n++)
	{
		aux = s[n];
		s[n] = *a;
		*a = aux;
		a--;
	}
}
