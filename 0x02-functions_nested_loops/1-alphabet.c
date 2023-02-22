#include "main.h"

/**
 * main - entry point
 *
 * Description: print alphabets in lower case
 * using _putchar function
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i = 97;

	while(i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
