#include <stdio.h>
#include <unistd.h>		/* for the write function */

/*
 * Function to print a line of underscores.
 * Param: n - number of underscores to print.
 */
void print_line(int n);

/*
* Implementation of print_line function.
* Prints underscores based on the provided count.
*/
void print_line(int n)
{
int i; /* Declare i outsidetheloopfor compatibility with older C standards */

if (n <= 0)
_putchar('\n');
else
{
for (i = 0; i < n; i++)
_putchar('_');
_putchar('\n');
}
}
