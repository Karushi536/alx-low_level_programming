#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from 'min' to 'max'.
 * @min: The starting integer (inclusive).
 * @max: The ending integer (inclusive).
 *
 * Return: A pointer to the newly created array or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *result;
	int size;

	if (min > max)
	{
		return (NULL); /* Return NULL if 'min' is greater than 'max'*/
	}

	size = max - min + 1;

	result = malloc(size * sizeof(int));

	if (result == NULL)
	{
	return (NULL); /* Return NULL if malloc fails*/
	}

	for (int i = 0; i < size; i++)
	{
		result[i] = min + i; /* Populate the array with values from 'min' to 'max'*/
	}

	return (result);
}
