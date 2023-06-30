#include <stdio.h>

/**
 * string_toupper - function
 * @ch: char low
 * Return: char up
 */

char *string_toupper(char *ch)
{
	int i = 0;

	while (ch[i])
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			ch[i] -= 32;
		}
		i++;
	}

	return (ch);
}
