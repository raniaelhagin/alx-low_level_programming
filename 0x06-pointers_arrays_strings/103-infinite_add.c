#include "main.h"

/**
 * get_size - get the string size
 * @s: the string
 *
 * Return: the size of the string
 */
int get_size(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * get_val - get the value of the digit
 * @s: the string
 * @index: the index of the digit
 *
 * Return: integer value
 */
int get_val(char *s, int index)
{
	int val;

	if (index < 0)
	{
		val = 0;
	}
	else
	{
		val = s[index] - '0';
	}
	return (val);
}

/**
 * infinite_add - adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer used to store the result
 * @size_r: the buffer size
 *
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int size_n1, size_n2, max_size, i, n1_val, n2_val, carry;

	size_n1 = get_size(n1);
	size_n2 = get_size(n2);
	max_size = (size_n1 > size_n2) ? (size_n1) : (size_n2);
	if ((max_size + 1) > size_r)
	{
		return (0);
	}
	i = max_size;
	while (i > 0)
	{
		n1_val = get_val(n1, size_n1);
		n2_val = get_val(n2, size_n2);
		r[i] = (n1_val + n2_val + carry) % 10 + '0';
		carry = (n1_val + n2_val + carry) / 10;

		i--;
		size_n1--;
		size_n2--;
	}
	r[max_size + 1] = '\0';
	if (carry > 0)
	{
		if (max_size + 2 < size_r)
		{
			i = max_size;
			while (i >= 0)
			{
				r[i + 1] = r[i];
				i--;
			}
		}
		else
		{
			return (0);
		}
		r[0] = carry + '0';
	}
	return (r);
}
