#include "mainr.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to be divided.
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, n, i;
	/* Calculate string length */
	while (str[len] != '\0')
	{
	len++;
	}

	/* Determine starting point */
	n = (len % 2 == 0) ? len / 2 : (len - 1) / 2;

	/* Print the second half */
	for (i = n; i < len; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
