#include "main.h"

/**
* _strncat - Concatenate two strings using at most n bytes from src.
* @dest: The destination string.
* @src: The source string.
* @n: The maximum number of bytes to use from src.
*
* Description: This function appends the src string to the dest string using
* at most n bytes, overwriting the terminating null byte (\0) attheendof dest.
* The src does not need to be null-terminated if it contains n or more bytes.
*
* Return: A pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
char *original_dest = dest;

/* Find the end of dest string */
while (*dest)
dest++;

/* Copy at most n characters from src to dest */
while (i < n && *src)
{
*dest = *src;
dest++;
src++;
i++;
}

/* Add terminating null byte if less than n characters were copied */
if (i < n)
*dest = '\0';

return (original_dest);
}
