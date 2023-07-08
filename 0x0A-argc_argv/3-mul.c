#include <stdio.h>
#include "main.h"

/**
 * main - function
 * @argc: num of args
 * @argv: array of args
 * Return: 0 for succes
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
	{
		i = _atoi(argv[1]) * _atoi(argv[2]);
		printf("%d\n", i);
	}
	else
		printf("Error\n");

	return (0);
}
