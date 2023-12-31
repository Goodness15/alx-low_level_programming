#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
* @a: the start of the matrix
* @size: the size of one side of the matrix
*
* Return: void
*/
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[(size + 1) * i];	/* Incrementing by size+1 goes down agonal */
sum2 += a[(size - 1) * (i + 1)]; /* Incrementing by size-1 dary gonal */
}
printf("%d, %d\n", sum1, sum2);
}
