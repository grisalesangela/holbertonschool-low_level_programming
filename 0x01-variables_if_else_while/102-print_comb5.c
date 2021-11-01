#include <stdio.h>
/**
 * main - prints combinations of two pairs of digits
 * Return: always 0
 */
int main(void)
{
	int a;
	int n;
	int g;
	int e;

	for (a = '0'; a <= '9'; a++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			for (g = '0'; g <= '9'; g++)
			{
				for (e = '1'; e <= '9'; e++)
				{
					if (e > n)
					{
						putchar(a);
						putchar(n);
						putchar(' ');
						putchar(g);
						putchar(e);
					if (a == '9' && n == '8' && g == '9' && e == '9')
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
	}
	return (0);
}
