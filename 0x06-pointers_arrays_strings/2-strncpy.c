#include <stdio.h>

/**
 * _strncpy - function
 * @dest: dest
 * @src: src
 * @n: number of bytes
 * Return: a pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* char *d = dest; */
	int j = 0; /*, i = 0;

	while (d[i] != '\0')
		i++; */

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
