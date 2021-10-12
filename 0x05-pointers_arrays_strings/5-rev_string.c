#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to be modified
 * Return: void
 */
void rev_string(char *s)
{
	char *begin = s;
	char t;
	/*set pointer at the end*/
	for (; *(s); s++)
	{
	}
	s--;

	/*loop to change the letters*/
	for (; s >= begin; s--)
	{
		t = *begin;
		*begin = *s;
		*s = t;
		begin++;
	}
}
