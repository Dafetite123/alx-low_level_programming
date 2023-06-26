#include <stdio.h>
#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int cnt = 0, ind1;

	while (*s)
	{
		cnt++;
		s++;
	}

	s--;

	for (ind1 = cnt; ind1 > 0; ind1--, s--)
	{
		putchar(*s);
	}
	putchar('\n');
}
