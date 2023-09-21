#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>
#include <stdio.h>

/* Function prototypes */
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *str);
char *cap_string(char *str);
char *leet(char *s);
void reverse_array(int *a, int n);
char *rot13(char *);
void print_number(int n);
int main(void);
void print_number(int n);
int _putchar(char c);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *leet(char *str);
char *rot13(char *str);
#endif /* MAIN_H */

