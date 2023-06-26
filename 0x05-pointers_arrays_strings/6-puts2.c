#include <stdio.h>

/**
 * puts2 - function
 * Return: 0 for succes
 */

void puts2(char *str)
{
	int cnt = 0;

	while (*str)
	{
		if (cnt % 2 == 0)
			putchar(*str);
		cnt++;
		str++;
	}
	putchar('\n');
}
