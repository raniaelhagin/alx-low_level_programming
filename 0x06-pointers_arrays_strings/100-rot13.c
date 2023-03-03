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
	int n = 0;
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		while (n < 53)
		{
			if (s[i] == input[n])
			{
				s[i] = output[n];
				break;
			}
			n++;
		}
		n = 0;
		i++;
	}
	return (s);
}
