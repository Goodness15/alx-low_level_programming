#include "maina.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
	int idx = 0;

	/* Blank line after declarations for readability */

	while (str[idx] != '\0')
	{
		_putchar(str[idx]);
		idx += 2;
	}

	_putchar('\n');
}
