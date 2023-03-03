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
	int n = 0;
	char codes[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int digits[5] = {4, 3, 0, 7, 1};

	while (s[i] != '\0')
	{
		while (n < 10)
		{
			if (s[i] == codes[n] || s[i] == codes[n + 1])
			{
				s[i] = digits[n / 2] + '0'; 
			}
			n += 2;
		}
		n = 0;
		i++;
	}
	return (s);
}
