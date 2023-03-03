#include "main.h"
#include "_strlen.c"

/**
 * _strcmp - compares two strings, s1 and s2
 * @s1: the first string
 * @s2: the second string
 *
 * Return: an integer value indicating the result of the comparison
 * 0, if s1 and s2 are equal
 * positive value, if s1 is greater than s2
 * negative value, if s1 is less than s2
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;
	int s1_len = _strlen(s1);
	int s2_len = _strlen(s2);
	int i = 0;
	int j = 0;
	
	if (s1_len == s2_len)
	{
		while (s1[i] != '\0')
		{
			diff = (s1[i] - s2[i]);
			if (diff != 0)
			{
				break;
			}
			i++;
		}
		
		return (diff);
	}
	else if (s1_len > s2_len)
	{
		while (s2[j] != '\0')
		{
			diff = (s1[i] - s2[j]);
			if (diff != 0)
			{
				break;
			}
			i++;
			j++;
		}
		if (diff == 0)
		{
			diff = (s1[i] - ' ');
		}
		return (diff);
	}
	else
	{
		while (s1[i] != '\0')
		{
			diff = (s1[i] - s2[j]);
			if (diff != 0)
			{
				break;
			}
			j++;
			i++;
		}
		if (diff == 0)
		{
			diff = (' ' - s2[j]);
		}
		
		return (diff);
	}
}
