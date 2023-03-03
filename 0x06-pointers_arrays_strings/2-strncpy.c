#include "main.h"
#include "_strlen.c"

/**
 * _strncpy - copies n btes from a string
 * @dest: the destination to copy the source string
 * @src: the source string to be copied from
 * @n: the n bytes to be copied
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
