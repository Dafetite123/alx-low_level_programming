#include <stdio.h>

/**
 * main - function
 * Return: 0 for succes
 */

int main(void)
{
	int ch, cha;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}

	for (cha = 'a'; cha <= 'f'; cha++)
	{
		putchar(cha);
	}
	putchar('\n');

	return (0);
}
