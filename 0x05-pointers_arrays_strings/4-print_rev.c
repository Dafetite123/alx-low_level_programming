#include <stdio.h>
#include "main.h"

/**
 * print_rev - function
 * @s: ptr
 */

void print_rev(char *s)
{
	int cnt = 0, ind;

	while (*s)
	{
		cnt++;
		s++;
	}

	/* printf("cnt=%d\n", cnt); */

	for (ind = cnt - 1; ind > 0; ind--, s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
