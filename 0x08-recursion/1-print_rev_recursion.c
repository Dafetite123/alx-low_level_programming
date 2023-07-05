#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - function
 * @s: ptr
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		/* _putchar(s[i]); */
		/* printf("What next!\n"); */
		_print_rev_recursion(s + 1);
		_putchar(s[i]);
		/* i++; */
		/* printf("What next!\n"); */
	}
	/* else */
		/* _putchar('\n'); */
}
