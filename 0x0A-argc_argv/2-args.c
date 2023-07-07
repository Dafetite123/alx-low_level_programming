#include <stdio.h>

/**
 * main - function
 * @argc: num of args
 * @argv: array of args
 * Return: 0 for succes
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	
	return (0);
}
