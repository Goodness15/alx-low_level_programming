#include "mains.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: The integer array.
 * @n: Number of elements to print.
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);

	/* If it's not the last element, print a comma and space */
	if (i != n - 1)
	{
	printf(", ");
	}
	}
	printf("\n");
}
