#include <stdio.h>
/**
 * main - Prints combinations of 3 different digits
 * return: always 0
 */

int main(void)
{
	int a;
	int n;
	int g;

	for (a = '0'; a <= '9'; a++)
	{
		for (n = '1'; n <= '9'; n++)
		{
			for (g = '1'; g <= '9'; g++)
			{
				if (a < n && n < g)
				{
					putchar(a);
					putchar(n);
					putchar(g);
					if (a == '7' && n == '8' && g == '9')
					{
						putchar(10);
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
