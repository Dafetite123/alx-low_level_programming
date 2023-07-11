#include "main.h"

/**
 * _strdup - function
 * @str: ptr
 * Return: ptr
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, j = 0;

	while (str[j])
		j++;

	if (str == NULL || j == 0)
		return (NULL);

	ptr = malloc(j * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < j ; i++)
		ptr[i] = str[i];

	return (ptr);
}
