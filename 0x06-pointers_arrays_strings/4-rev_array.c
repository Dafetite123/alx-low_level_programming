#include <stdio.h>

/**
 * reverse_array - function
 * @a: array
 * @n: number
 */

void reverse_array(int *a, int n)
{
	int i = 0, tmp;
	while (i < (n / 2))
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
