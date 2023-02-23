#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - check if the number is +ve or -ve or 0
 * @i: the integer
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	if (n == i)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
