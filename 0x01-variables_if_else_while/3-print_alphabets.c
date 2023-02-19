#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabet in lower and upper case
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char lower_ch = 97;
	char upper_ch = 65;
	int lower_bn = 123;
	int upper_bn = 91;

	while (lower_ch < lower_bn)
	{
		putchar(lower_ch);
		lower_ch++;
	}
	while (upper_ch < upper_bn)
	{
		putchar(upper_ch);
		upper_ch++;
	}
	putchar('\n');
	return (0);
}
