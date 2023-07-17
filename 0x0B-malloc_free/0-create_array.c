#include "main.h"

/**
 * create_array - function
 * @size: num chars
 * @c: char
 * Return: ptr
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(c));
	if (ptr == NULL || size == 0)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		ptr[i] = c;

	return (ptr);
}
