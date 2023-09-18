#include "maini.h"

/**
 * _strlen - Return the length of a string.
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int length = 0;
	/* Iterate over the string until the null-terminating character */
	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
