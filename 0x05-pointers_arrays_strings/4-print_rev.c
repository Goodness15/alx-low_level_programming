#include "mainu.h"

/**
 * print_rev - Print a string in reverse followed by a new line.
 * @s: The string to print.
 */
void print_rev(char *s)
{
	int len = 0;
	/* Determine the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Blank line after declarations for readability */
	/* Print the string in reverse */
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}
