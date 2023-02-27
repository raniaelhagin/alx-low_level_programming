#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string to be reversed
 *
 * Return: None
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tmpC;

	/* get the length of the string */
	while (s[i] != '\0')
	{
		i++;
	}
	
	j = i - 1;
	i = 0;

	while (j > i)
	{
		tmpC = s[i];
		s[i] = s[j];
		s[j] = tmpC;
		i++;
		j--;
	}
}
