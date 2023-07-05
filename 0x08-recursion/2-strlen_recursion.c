#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - function
 * @s: ptr
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int i = 0, j = 0;

	if (s[i])
	{
		/* _putchar(s[i]); */
		/* printf("What next!\n"); */
		j += _strlen_recursion(s + 1);
		j++;
		/* _putchar(s[i]); */
		/* i++; */
		/* printf("What next!\n"); */
	}
	/* else */
		/* _putchar('\n'); */
	return (j);
}
