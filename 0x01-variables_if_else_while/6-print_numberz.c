#include <stdio.h>

/**
 * main - function
 * Return: 0 for succes
 */

int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar(ch + '0');
	}
	putchar('\n');

	return (0);
}
