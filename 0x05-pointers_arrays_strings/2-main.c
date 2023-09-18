#include "maini.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;
	/* Add a blank line after declarations */
	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
