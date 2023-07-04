#include <stdio.h>

/**
 * _strchr - function
 * @s: ptr
 * @c: char
 * Return: ptr
 */

char *_strchr(char *s, char c)
{
	int index = 0;

	for (; s[index] != '\0' ; index++)
	{
		if (s[index] == c)
		{
			return (&s[index]);
		}
	}
	if (c == '\0')
		return (NULL);

	return (NULL);
}
