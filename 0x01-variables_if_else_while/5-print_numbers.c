#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print decimal digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	
	while (n < 10)
	{
		printf("%i", n);
		n++;
	}
	printf("\n");
	return (0);
}
