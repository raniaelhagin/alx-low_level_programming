#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the string to be encoded
 *
 * Return: a pointer to that string
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 65 && s[i] <= 77) || (s[i] >= 97 && s[i] <= 109))
		{
			s[i] += 13;
		}
		else if ((s[i] >= 78 && s[i] <= 90) || (s[i] >= 110 && s[i] <= 122))
		{
			s[i] -= 13;
		}
		i++;
	}
	return (s);
}
