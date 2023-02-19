#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of an integer and where it is
 *
 * Description: the last digit is 0, less than 6 and not 0 or greater than 5
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;
	printf("Last digit of %i is %i and is ", n, last_digit);
	if (last_digit == 0)
	{
		printf("0\n");
	}
	else if (last_digit > 5)
	{
		printf("greater than 5\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
