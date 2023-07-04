#include <stdio.h>

/**
 * _memcpy - function
 * @src: source
 * @dest: destination
 * @n: num
 * Return: ptr
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	for (; index < n ; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
