#include "maing.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int len = 0, left = 0;
	char temp;

	/* Determine the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Blank line after declarations for readability */

	/* Decrement len by 1 to get the index of the last character */
	len--;

	/* Swap characters from start and end of string */
	while (left < len)
	{
		temp = s[left];
		s[left] = s[len];
		s[len] = temp;
		left++;
		len--;
	}
}
