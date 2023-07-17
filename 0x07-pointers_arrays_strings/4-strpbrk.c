#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function
 * @s: ptr
 * @accept: char
 * Return: u-int
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, k = 0, l, m, n = 0;
	char *res;

	for (i = 0 ; accept[i] != '\0' ; i++)
	{
		printf("for accept value= %c\n", accept[i]);
		printf("for k value = %d\n", k);

		if (k)
			break;
		for (j = 0 ; s[j] != '\0' ; j++)
		{
			printf("for s value = %c\n", s[j]);
			if (accept[i] == s[j])
			{
				k = i;
				printf("i = %d and k = %d\n", i, k);
				break;
			}
		}
	}

	printf("for i value = %d\n", i);

	while (s[n] != '\0')
		n++;

	m = n - i;

	printf("for m value = %d\n", m);

	res = malloc(m * sizeof(char));
	if (res == NULL)
		printf("Memory allocation failed\n");

	for (l = 0 ; l < m ; j++, l++)
	{
		res[l] = s[j];
		printf("for res value= %c\n", res[l]);
	}

	return (res);
}
