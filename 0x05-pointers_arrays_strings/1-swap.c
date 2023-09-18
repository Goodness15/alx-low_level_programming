#include "main.h"

/**
 * swap_int - Swap the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
	int temp;
	/* Add a blank line after declarations */
	temp = *a;   /* store value of 'a' in 'temp' */
	*a = *b;     /* assign value of 'b' to 'a' */
	*b = temp;   /* assign the original value of 'a' (from 'temp') to 'b' */
}
