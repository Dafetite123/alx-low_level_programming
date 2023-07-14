#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - function
 * @n: u-int
 * @s1: ptr1
 * @s2: ptr2
 * Return: ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, m, j = 0, k = 0;

	if (s1 == NULL || s2 == NULL)
		ptr = "";

	while (s1[j])
		j++;

	while (s2[k])
		k++;

	ptr = malloc((j + n) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < j ; i++)
		ptr[i] = s1[i];

	for (m = 0 ; m < n ; m++)
		ptr[i + m] = s2[m];

	ptr[i + m] = '\0';

	return (ptr);
}
