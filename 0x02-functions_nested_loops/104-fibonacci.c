#include <stdio.h>

/**
 * fibonacci - fibonacci
 * @n: input
 */

void fibonacci(int n)
{
	int i, first = 1, second = 2;

	printf("%d, %d, ", first, second);

	for (i = 3; i <= n; i++)
	{
		int next = first + second;
		printf("%d", next);

		if (i != n)
		{
			printf(", ");
		}

		first = second;
		second = next;
	} printf("\n");
}


/**
 * main - function
 * Return: 0
 */
int main (void)
{
	int n = 98;

	fibonacci(n);
	return 0;
}
