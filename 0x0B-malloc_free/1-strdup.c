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

	if (str == NULL)
		return (NULL);

	while (str[j])
		j++;

	ptr = malloc((j + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < j ; i++)
		ptr[i] = str[i];

	return (ptr);
}
