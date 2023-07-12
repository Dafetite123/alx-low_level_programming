#include "main.h"

/**
 * alloc_grid - function
 * @width: ptr1
 * @height: ptr2
 * Return: ptr
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}

		for (m = 0 ; m < width ; m++)
			ptr[i][m] = 0;
	}

	return (ptr);
}
