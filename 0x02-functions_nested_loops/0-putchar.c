#include "main.h"

/**
 * main - Entry point, prints "_putchar"
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
