#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print all possible
 * combinations of single-digit numbers'
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
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
