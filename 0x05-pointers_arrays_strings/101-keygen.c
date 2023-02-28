#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: generate a random password
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;
	int randomizer = 0;
	char pass[8];
	char numbers[] = "0123456789";
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTERS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "@#$^&*?!";

	srand(time(NULL));
	while (i < 8)
	{
		randomizer = rand() % 4; 
		if (randomizer == 1)
		{
			pass[i] = numbers[rand() % 10];
			printf("%c", pass[i]);
		}
		else if (randomizer == 2)
		{
			pass[i] = letters[rand() % 26];
			printf("%c", pass[i]);
		}
		else if (randomizer == 3)
		{
			pass[i] = LETTERS[rand() % 26];
			printf("%c", pass[i]);
		}
		else
		{
			pass[i] = symbols[rand() % 8];
			printf("%c", pass[i]);
		}
		i++;
	}

	return (0);
}
