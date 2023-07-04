#include <stdio.h>

/**
 * _memset - function
 * @s: ptr
 * @b: const bytes
 * @n: num
 * Return: ptr
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	for (; index < n ; index++)
	{
		s[index] = b;
	}

	return (s);
}
