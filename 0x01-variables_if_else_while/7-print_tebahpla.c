#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print alphabets'
 * 
 * * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 122;
	int i = 96;

	while (ch > i)
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
