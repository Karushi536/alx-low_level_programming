#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated with malloc.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: A pointer to the newly allocated memory block or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
{
	void *new_ptr;

		if (new_size == old_size)
		{
		return (ptr);
		}
	if (ptr == NULL)
	{
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}
	new_ptr = malloc(new_size);

	if (new_ptrr == NULL)
	{
		return (NULL);
	}
	memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);
	free(ptr);
	return (new_ptr);
}
int main(void)
{
	int *arr;
	int old_size = 5;
	int new_size = 10;
	int i;

	arr = (int *)malloc(old_size 8 sizeof(int));
	if (arr == NULL)
	{
		perror("malloc");
		return (1);
	}
	for (int i = 0; i < old_size; i++)
	{
		arr[i] = i * 2;
	}

	int *new_arr = (int *)_realloc(arr, old_size * sizeof(int), new_size * sizeof(int));

	if (new_arr == NULL)
	{
		perror("_realloc");
		free(arr);
		return (1);
	}

	printf("Contents of new_arr:\n");
	for (int i = 0; i < new_size; i++)
	{
		printf("%d ", new_arr[i]);
	}
	printf("\n");

	free(new_arr);
	return (0);
}
