#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'get the last digiti of anumber'
 * Return: always 0
 */
int main(void)
{
	int n;
	int good;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	good = n % 10;
	if (good > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, good);
	}
	else if (good == 0)
	{
		printf("Last digit %d is %d and is greater than 0\n", n, good);
	}
	else
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, good);
	}
	return (0);
}
