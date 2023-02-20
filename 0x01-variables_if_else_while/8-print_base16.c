#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print base 16 digits'
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}

	i = 97;
	while (i < 103)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
