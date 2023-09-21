#include "main.h"

/**
* print_number - prints an integer.
* @n: the integer
* Return: void
*/
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

/* Recursive function to print the number character by character */
if (n / 10)
print_number(n / 10);

_putchar((n % 10) + '0');
}
