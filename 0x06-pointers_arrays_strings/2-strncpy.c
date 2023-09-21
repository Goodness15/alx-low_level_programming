#include "main.h"

/**
* _strncpy - Copies at most n characters from the string src to dest.
* @dest: The destination string.
* @src: The source string.
* @n: The maximum number of characters to copy from src.
*
* Description: If src is less than n characters long, the remainder of dest
* will be filledwith '\0' characters.Otherwise,destwillnotbe null-terminated.
*
* Return: A pointer to the resulting string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];


/** Fill the remainder with '\0'*/
for (; i < n; i++)
dest[i] = '\0';


return (dest);
}
