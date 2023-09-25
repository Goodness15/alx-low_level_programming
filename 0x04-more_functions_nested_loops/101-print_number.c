#include "main.h"

/**
* print_number - Prints an integer.
* @n: The integer to be printed.
*/
void print_number(int n)
{
unsigned int num;		/* This helps in managing negative numbers */

if (n < 0)
{
_putchar('-');
num = -n;
}
else
{
num = n;
}

if (num / 10)
{/* Thisus to move to the most significant digit recursively */
print_number(num / 10);
}

_putchar((num % 10) + '0');	/* Print the least significant digit */
}
