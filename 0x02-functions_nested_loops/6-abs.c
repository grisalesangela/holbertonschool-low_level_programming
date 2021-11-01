#include "main.h"
#include "stdio.h"
/**
 * _abs - compute the obsolute value of an integer
 * @j: number to check
 * Return: absolute value j
 */
int _abs(int j)
{
	if (j >= 0)
	{
		return (j);
	}
	else
	{
		j *= -1;
		return (j);
	}
}
