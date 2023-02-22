#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0 && n > INT_MIN)
	{
		n = -n;
	}
	else if (n == INT_MIN)
	{
		n = -(n+1);
	}
	a = n % 10;
	_putchar(a + 48);
	return (a);
}
