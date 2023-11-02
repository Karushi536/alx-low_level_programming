#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Allocate memory using malloc with error checking.
 * @b: The size of the memory block to allocate.
 *
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
