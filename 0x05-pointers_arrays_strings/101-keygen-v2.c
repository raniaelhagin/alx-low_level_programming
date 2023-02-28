#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;
	char pass;

	srand(time(NULL));
	while (i < 8)
	{
		pass = rand() % 10 + '0';
		i++;
		printf("%c", pass);
	}
	printf("\n");

	return (0);
}
