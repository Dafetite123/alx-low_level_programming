#include <stdio.h>

/**
 * main - function
 * Return: 0 for succes
 */

int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", *argv);
	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
			printf("%s\n", argv[i]);
	}
	
	return (0);
}
