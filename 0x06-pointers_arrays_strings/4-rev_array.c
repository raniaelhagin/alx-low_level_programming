#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 *
 * Return: None
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n - i - 1)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
