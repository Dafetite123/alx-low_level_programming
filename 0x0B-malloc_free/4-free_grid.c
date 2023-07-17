#include "main.h"

/**
 * free_grid - function
 * @grid: ptr1
 * @height: num
 * Return: ptr
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
