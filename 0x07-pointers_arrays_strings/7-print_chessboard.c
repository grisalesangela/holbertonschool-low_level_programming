#include "main.h"
/**
 * print_chessboard - print the chessboard
 * @a: string to review
 * Return: no return
 */
void print_chessboard(char (*a)[8])
{
	int x = 0, y;

	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
