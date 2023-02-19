#include <stdio.h>

/**
 * main - Entry point 
 *
 * Description: print alphabets except q and e
 *
 * Retrn: always 0 (Success)
 */
int main(void)
{
	int lower_bn = 123;
	char ch = 97;

	while (ch < lower_bn)
	{
		if ((ch != 101) && (ch != 113))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	
	return (0);
}
