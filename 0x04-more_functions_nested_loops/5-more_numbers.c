#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 *
 * Return: None
 */
void more_numbers(void)
{
	int i, j;
	
	j = 0;
	while (j < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
