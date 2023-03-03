#include "main.h"
#include <limits.h>
#include <stdbool.h>

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: None
 */
void print_number(int n)
{
	bool is_int_min = false;

	if (n < 0)
	{
		_putchar('-');
		if (n == INT_MIN)
		{
			n = -(n + 1);
			is_int_min = true;
		}
		else
		{
			n = -n;
		}
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	if (is_int_min)
	{
		_putchar(((n % 10) + 1) + '0');
	}
	else
	{
		_putchar((n % 10) + '0');
	}
}
