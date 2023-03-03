#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string
 *
 * Return: a pointer to the resulting string
 */
char *cap_string(char *s)
{
	char sep[14] = {' ', '\t', '\n', ',', '.', '.', '!', '?', ';',
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
		while (n < 14)
		{
			if (s[i] == sep[n])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] -= 32;
					break;
				}
			}
			n++;
		}
		n = 0;
		i++;
	}
	return (s);
}
