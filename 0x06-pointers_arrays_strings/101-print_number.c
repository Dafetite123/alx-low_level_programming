#include <stdio.h>

/**
 * print_number - function
 * @n: int number
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		putchar((n / 10) + '0');
	}
	if (n > 10)
	{
		if (n > 100)
		{
			if (n > 1000)
				putchar((n / 1000) + '0');
			putchar((n / 100) + '0');
		}
		putchar((n / 10) + '0');
	}
	putchar((n % 10) + '0');
}
