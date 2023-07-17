#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - function
 * @b: u-int
 * Return: void ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit (98);

	return (ptr);
}
