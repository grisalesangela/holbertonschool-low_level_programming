#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
int _putchar(char c);
char *_memser(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int n);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
#endif /* MAIN_H */
