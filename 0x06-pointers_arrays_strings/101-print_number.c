#include "main.h"
#include <limits.h>

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: None
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n == INT_MIN)
		{
			n = -(n + 1);
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
	_putchar((n % 10) + '0');
}
