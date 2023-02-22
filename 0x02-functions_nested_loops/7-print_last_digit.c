#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Rerurn: the value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n >= 0)
	{
		a = n % 10;
	}
	else
	{
		a = (-n) % 10;
	}
	_putchar(a + 48);
	return (a);
}
