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
	/* your code goes there */
	
	last_digit = n % 10;
	if (last_digit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last_digit);
	}
	else if (last_digit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", last_digit);
	}
	else 
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_digit);
	}

	return (0);
}
