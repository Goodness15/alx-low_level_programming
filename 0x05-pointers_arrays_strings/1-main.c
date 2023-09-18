#include "main.h"
#include <stdio.h>

/**
 * main - Check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b;
	/* Add a blank line after declarations */
	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
