#include "main.h"
#include "strlen.c"

/**
 * _strncat - concatenate two strings
 * @dest: the destination to append the source string
 * @src: the source string to be appended
 *
 * Description: it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
