#include "main.h"

/**
 * print_triangle - print triangle of size s
 * @size: size of the triangle 
 *
 * Return: None
 */
void print_triangle(int size)
{
	int row = 1;
	int col = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (row < size)
		{
			while (col < size)
			{
				_putchar(' ');
				col++;
			}
		}
	}
}
