#include "main.h"

/**
 * print_rev -  prints a string, in reverse
 * @s: the string to be printed
 *
 * Return: None
 */
void print_rev(char *s)
{
	/* get the length of a string */
	int i = 0;
	int length = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}

	/* print the string in a reverse order */
	i = length - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
