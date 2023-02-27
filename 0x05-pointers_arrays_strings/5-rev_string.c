#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string to be reversed
 *
 * Return: None
 */
void rev_string(char *s)
{
	/* get the length of a string */
	int i = 0;
	int j = 0;
	char *tmp;
	int length = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}

	i = 0;
	j = length - 1;
	tmp = s;
	while (j >= 0)
	{
		tmp[i] = s[j];
		i++;
		j--;
	}
}
