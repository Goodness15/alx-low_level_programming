#include <stdio.h>

/**
 * reset_to_98 - Updates the value it points to to 98.
 * @n: Pointer to the integer.
 *
 * Return: Nothing.
 */
void reset_to_98(int *n)
{
	*n = 98;
}
/**
 * main - Main entry point for the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int value = 42;

	/* Blank line after the declaration */
	printf("Before: %d\n", value);
	reset_to_98(&value);
	printf("After: %d\n", value);

	return (0);
}

