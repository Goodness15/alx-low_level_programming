#include "main.h"

/**
* _strpbrk - Searches a string for any of a set of bytes.
* @s: The string to be searched.
* @accept: The string containing the bytes to match.
*
* Return: A pointer to the byte in s that matches one of the
*         bytes in accept, or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
char *start_accept;

start_accept = accept;

while (*s)
{
accept = start_accept;	/* Reset 'accept' for every new char of 's' */

while (*accept)
{
if (*s == *accept)
return (s);		/* Found a match, return pointer to char in 's' */

accept++;
}
s++;
}
return (NULL);		/* No match found */
}
