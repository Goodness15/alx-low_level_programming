#include "main.h"

/**
* more_numbers - prints numbers from 0 to 14, 10 times.
*/
void more_numbers(void)
{
int num, repeat;

for (repeat = 0; repeat < 10; repeat++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
{
_putchar((num / 10) + '0');
}
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
