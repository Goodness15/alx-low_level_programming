#include <stdio.h>
#include <math.h>

/**
* main - Entry point, finds and prints the largest prime factor
* of the number 612852475143.
*
* Return: Always 0.
*/
int main(void)
{
unsigned long int num = 612852475143;
unsigned long int div = 2, maxPrime;

while (num != 0)
{
if (num % div != 0)
div = div + 1;
else
{
maxPrime = num;		/* At this point, a larger prime factor found */
num = num / div;
if (num == 1)
{		/* The last prime factor */
printf("%lu\n", maxPrime);
break;
}
}
}
return (0);
}
