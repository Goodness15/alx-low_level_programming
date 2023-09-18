#include "main.h"
#include <stdio.h>

/**
 * main - Tests function to swap values of two integers.
 * Return: Always 0.
 */
int main(void)
{
	int a = 98;
	int b = 42;

	/* Blank line after the declaration */
	printf("Before swap: a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("After swap: a=%d, b=%d\n", a, b);
	return (0);
}
