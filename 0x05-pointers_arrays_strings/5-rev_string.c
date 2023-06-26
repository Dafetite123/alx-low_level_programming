#include <stdio.h>
#include "main.h"
/**
 * rev_string - imprime en reversa
 * @s: string
 * return: 0
 */
void rev_string(char *s)
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
		putchar(*s);
	}

	putchar('\n');
}
