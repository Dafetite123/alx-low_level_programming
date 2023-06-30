#include <stdio.h>

/**
 * _strcmp - function
 * @s1: dest
 * @s2: src
 * Return: a pointer
 */

char *_strcat(char *dest, char *src)
{
	char *d = dest;
	int i = 0, j = 0;

	while (d[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';

	return (dest);
}
