#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - check if the number is +ve or -ve or 0
 *
 * Return: Always 0 (Success)
 */
int positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
