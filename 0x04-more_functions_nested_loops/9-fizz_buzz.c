#include <stdio.h>

/**
* main - Entry point for the FizzBuzz program.
*
* Return: Always 0 (Success).
*/
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{	/* Check for multiples of both 3 and 5 */
printf("FizzBuzz");
}
else if (i % 3 == 0)
{	/* Check for multiples of 3 */
printf("Fizz");
}
else if (i % 5 == 0)
{	/* Check for multiples of 5 */
printf("Buzz");
}
else
{
printf("%d", i);
}

/* If it's not the last number, print a space */
if (i < 100)
printf(" ");

}

printf("\n");			/* Print a newline at the end */
return (0);
}
