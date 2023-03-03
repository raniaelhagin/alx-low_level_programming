#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to be encoded
 *
 * Return: A pointer to that string
 */
char *leet(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = 4 + '0';
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = 3 + '0';
		}
		else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
		}
		else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = 7 + '0';
		}
		else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = 1 + '0';
		}
		i++;
	}
	return (s);
}
