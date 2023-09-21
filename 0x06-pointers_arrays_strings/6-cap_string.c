#include "main.h"

/**
* is_separator - checks if the character is a separator.
* @c: character to check
*
* Return: 1 if character is a separator, 0 otherwise.
*/
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;

for (i = 0; separators[i]; i++)
{
if (c == separators[i])
return (1);
}

return (0);
}

/**
* cap_string - Capitalizes all words of a string.
* @str: The string to be modified.
*
* Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
int i = 0;

/* capitalize the first character of the string if it's a letter */
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 'a' - 'A';

for (i = 1; str[i]; i++)
{
if (str[i] >= 'a' && str[i] <= 'z' && is_separator(str[i - 1]))
str[i] -= 'a' - 'A';

}

return (str);
}
