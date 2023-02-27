#include "main.h"

/**
 * _strlen - a fn to return the length of a string
 * @s: the input string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i = 0;
	int length = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return length;	
}
