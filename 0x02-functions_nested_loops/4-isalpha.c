#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to check.
 * Return: 1 if the character is a letter (uppercase or
 * lowercase), 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
