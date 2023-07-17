#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function
 * @s1: ptr1
 * @s2: ptr2
 * @n: num
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, r1 = 0, r2 = 0;

	while (s1 && s1[r1])
		r1++;

	while (s2 && s2[r2])
		r2++;

	if (n < r2)
		s = malloc(sizeof(char) * (r1 + n + 1));
	else
		s = malloc(sizeof(char) * (r1 + r2 + 1));

	if (!s)
		return (NULL);

	while (i < r1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < r2 && i < (r1 + n))
		s[i++] = s2[j++];

	while (n >= r2 && i < (r1 + r2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
