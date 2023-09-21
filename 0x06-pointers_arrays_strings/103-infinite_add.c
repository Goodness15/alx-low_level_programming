#include <stdio.h>
#include <string.h>
/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 * Return: A pointer to the result.
 *         If r does not have enough space to store the result, return 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = strlen(n1) - 1;
int j = strlen(n2) - 1;
int k = size_r - 2;
int carry = 0;
int sum = 0;

r[size_r - 1] = '\0';

while (i >= 0 || j >= 0 || carry > 0)
{
if (k < 0)
return (0);

sum = carry;

if (i >= 0)
{
sum += n1[i] - '0';
i--;
}

if (j >= 0)
{
sum += n2[j] - '0';
j--;
}

r[k] = (sum % 10) + '0';
carry = sum / 10;
k--;
}

if (k >= 0)
memmove(r, r + k + 1, size_r - k - 1);

return (r);
}
