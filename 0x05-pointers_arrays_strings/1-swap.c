#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: a pointer to the first integer
 * @b: a pointer to the second integer
 *
 * Return: None
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
