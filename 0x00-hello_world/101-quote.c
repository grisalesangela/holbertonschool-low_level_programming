#include <stdio.h>
/**
 * main - entry point
 *
 * return: always 1
*/
int main(void)
{
	char Mstr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", Mstr);
	return (1);
}
