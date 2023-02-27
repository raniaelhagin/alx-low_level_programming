#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements of an array of integers
 * @a: the array
 * @n: the number of elements to be printed
 *
 * Return: None
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n-1)
		{
			printf("%d, ", a[i]);
			i++;
		}
		printf("%d\n", a[n-1]);
	}
	else
	{
	printf(" \n");
	}
}
