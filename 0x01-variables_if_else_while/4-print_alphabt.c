#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet, excluding q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* Blank line after the declaration */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
	{
		putchar (ch);
	}
	}
	putchar ('\n');
	return (0);
}
