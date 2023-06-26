#include <stdio.h>
#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int cnt = 0, ind;

	while (*s)
	{
		cnt++;
		s++;
	}

	s--;

	for (ind = cnt; ind > 0; ind--, s--)
	{
		_putchar(*s);
	}

	_putchar('\n');
}
