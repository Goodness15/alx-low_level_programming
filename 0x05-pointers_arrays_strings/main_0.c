#include <stdio.h>

void reset_to_98(int *);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 402;
	printf("Before: %d\n", n);
	reset_to_98(&n);
	printf("After: %d\n", n);
	return (0);
}
