#include "main.h"
#include "_putchar.c"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string
 *
 * Return: a pointer to the resulting string
 */
char *cap_string(char *s)
{
	char sep[13] = {' ', '\t', '\n', ',', '.', '.', '!', '?',
	'"', '(', ')', '{', '}'};
	int i = 0;
	int n = 0;

	if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] -= 32;
		i++;
	}
	while (s[i] != '\0')
	{
		while (n < 13)
		{
			if (s[i] == sep[n])
			{
				i++;
				if (s[i] >= 97 && s[i] <= 122)
				{
					s[i] -= 32;
					continue;
				}
			}
			n++;
		}
		n = 0;
		i++;
	}
	return (s);
}
