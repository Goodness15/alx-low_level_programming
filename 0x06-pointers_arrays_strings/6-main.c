#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
char str1[] = "Expect the best. Prepare for the worst. Capitalize on what";
char str2[] = " comes.";
char str3[] = "\nhello world! hello-world 0123456hello world\thello";
char str4[] = " world.hello world\n";
char str[300];		/* Large enough to hold all strings together */
char *ptr;			/* Declare ptr here */

sprintf(str, "%s%s%s%s", str1, str2, str3, str4);

ptr = str;			/* Assign value to ptr here */
printf("%s", ptr);
return (0);
}
