#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @s: the string to be converted
 *
 * Return: integer number
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int sign = 1;
	unsigned int res = 0;

	while (s[j] != '\0')
	{
		if (s[j] == '-')
		{
			sign *= -1;
		}
		if (s[j] >= 48 && s[j] <= 57)
		{
			i = j;
			while (s[i] >= 48 && s[i] <= 57)
			{
				res = res * 10 + s[i] - '0';
				i++;
			}
			break;
		}
		j++;
	}
	return (sign * res);
}
