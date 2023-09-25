#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* Function prototypes */
int _putchar(char c);
void print_number(int n);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _putchar(char c);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif /* MAIN_H */

