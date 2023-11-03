#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size in bytes of each element.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	void *ptr;

	/* Check for zero or invalid inputs */
	if (nmemb == 0 || size == 0)
	return (NULL);

	total_size = nmemb * size;  /*Calculate the total size needed*/

	ptr = malloc(total_size);  /* Allocate memory*/

	/* Check if malloc failed */
	if (ptr == NULL)
	{
	return (NULL);
	}

	/* Initialize allocated memory to zero using memset */
	memset(ptr, 0, total_size);

	return (ptr);
}
