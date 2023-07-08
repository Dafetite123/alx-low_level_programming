#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * main - function
 * @argc: num of args
 * @argv: array of args
 * Return: 0 for succes
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, j, k = 1;

	if (argc > 1)
	{
		for (j = 1 ; j < argc ; j++)
		{
			/* printf("argv[%d] = %c\n", j, *argv[j]); */
			if (!(*argv[j] >= '0' && *argv[j] <= '9'))
			{
				printf("Error\n");
				k = 0;
				break;
			}
		}
	}

	if (argc > 2 && k == 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			sum += _atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
		printf("0\n");

	return (0);
}
