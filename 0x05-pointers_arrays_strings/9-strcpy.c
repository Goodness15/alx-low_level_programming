#include "maino.h"

/**
 * _strcpy - Copies the string pointed to by src including the
 * terminating null byte to the buffer pointed to by dest.
 * @dest: The destination buffer.
 * @src: The source string.
 * Return: A pointer to the destination buffer dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	/* Copy each character from src to dest */
	while (src[i])
	{
	dest[i] = src[i];
	i++;
	}

	/* Null-terminate the dest string */
	dest[i] = '\0';

	return (dest);
}
