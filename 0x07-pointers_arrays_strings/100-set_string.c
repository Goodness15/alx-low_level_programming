#include "main.h"

/**
* set_string - sets the value of a pointer to a char
* @s: the address of the pointer we want to set to point to `to`
* @to: the address we want `s` to point to
*
* Return: void
*/
void set_string(char **s, char *to)
{
*s = to;
}
