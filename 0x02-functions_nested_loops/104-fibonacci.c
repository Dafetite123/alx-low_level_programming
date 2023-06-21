#include <stdio.h>



void printFibonacci(int n)
{
	int first = 1;
	int second = 2;

	// Print the first two Fibonacci numbers
	printf("%d, %d, ", first, second);

	// Generate and print the next Fibonacci numbers
	for (int i = 3; i <= n; i++)
	{
		int next = first + second;
		printf("%d", next);

		// Add a comma and space after each number (except the last one)
		if (i != n)
		{
			printf(", ");
		}

		// Update variables for the next iteration
		first = second;
		second = next;
	} printf("\n");
}

int main()
{
	int n = 98;
	printFibonacci(n);
	return 0;
}
