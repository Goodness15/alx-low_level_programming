#include "main.h"

/**
* _strcat - Concatenate two strings.
* @dest: The destination string.
* @src: The source string.
*
* Description: This function appends the src string to the dest string,
* overwriting the terminating null byte (\0) at the end of dest, and then
* adds a terminating null byte.
*
* Return: A pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
char *original_dest = dest;

/* Find the end of dest string */
while (*dest)
dest++;

/* Copy characters from src to dest */
while (*src)
{
*dest = *src;
dest++;
src++;
}

/* Add the terminating null byte */
*dest = '\0';

return (original_dest);
}
