#include <stdio.h>

/**
 * main - function
 * Return: 0 for succes
 */

int main(void)
{
	char ch, cha;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (cha = 'A'; cha <= 'Z'; cha++)
	{
		putchar(cha);
	}
	putchar('\n');

	return (0);
}
