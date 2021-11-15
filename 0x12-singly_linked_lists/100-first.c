#include <stdio.h>
/**
 * first - print something before main
 */
void __attrbute__ ((constructor)) first()
{
	char *s;

	s = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", s);
}
