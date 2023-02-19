#include <stdio.h>

/**
 * main - main function Entry point
 *
 * Description: print digits using putchar 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 48;

	while (ch < 58)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
