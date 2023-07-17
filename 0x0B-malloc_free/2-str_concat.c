#include "main.h"

/**
 * str_concat - function
 * @s1: ptr1
 * @s2: ptr2
 * Return: ptr
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int m, i, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[j])
		j++;

	while (s2[k])
		k++;

	ptr = malloc((j + k + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < j ; i++)
		ptr[i] = s1[i];

	for (m = 0 ; m < k ; m++)
		ptr[i + m] = s2[m];

	ptr[i + m] = '\0';

	return (ptr);
}
