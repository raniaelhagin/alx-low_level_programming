#include "main.h"

/**
 * print_alphabet_x10: A function to
 * print alphabets 10 times
 *
 * Return: None
 */
void print_alphabet_x10(void)
{
	int ch = 97;
	int i = 0;

	while (i < 10)
	{
		while (ch < 123)
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
		ch = 97;
	}
}
