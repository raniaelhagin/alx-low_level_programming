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
	char pass[8];

	srand(time(NULL));
	while (i < 8)
	{
		pass[i] = rand() % 10;
		i++;
	}
	printf("%s", pass);
}
