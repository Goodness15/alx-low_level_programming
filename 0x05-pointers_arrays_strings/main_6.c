#include <stdio.h>
#include "maina.h"

void puts2(char *);

/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 */
int main(void)
{
	char *str1 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit,";
	char *str2 = "sed do eiusmod tempor incididunt ut labore et dolore magna";
	char *str3 = "aliqua. Ut enim ad minim veniam, quis nostrud exercitation";
	char *str4 = "ullamco laboris nisi ut aliquip ex ea commodo consequat.";
	char *str5 = "Duis aute irure dolor in reprehenderit in voluptate velit";
	char *str6 = "esse cillum dolore eu fugiat nulla pariatur. Excepteur sint";
	char *str7 = "occaecat cupidatat non proident, sunt in culpa qui officia";
	char *str8 = "deserunt mollit anim id est laborum.\0Holberton";

	char full_str[1000];

	sprintf(full_str, "%s %s %s %s %s %s %s %s",
	str1, str2, str3, str4, str5, str6, str7, str8);

	puts2(full_str);
	return (0);
}
