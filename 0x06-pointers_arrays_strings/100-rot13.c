#include <stdio.h>

/**
 * rot13 - function
 * @ch: char ptr
 * Return: ptr
 */

char *rot13(char *ch)
{
	int i = 0, j;
	char *let = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *num = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (ch[i])
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (ch[i] == let[j])
			{
				ch[i] = num[j];
				break;
			}
		}
		i++;
	}
	return (ch);
}
