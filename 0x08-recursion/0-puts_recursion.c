#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function
 * @s: ptr
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
		/* i++; */
		/* printf("What next!\n"); */
	}
	else
		_putchar('\n');
}
