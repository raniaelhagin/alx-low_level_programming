#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: the string to be printed
 *
 * Return: None
 */
void puts_half(char *str)
{
	int i;
	int n;

	/* get the length of the string */
	while ( str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i - 1) / 2;
	}
	while ( str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
