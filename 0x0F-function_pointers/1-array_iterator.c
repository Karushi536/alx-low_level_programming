#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a parameter on each element of an array
 * @array: an array of elements
 * @size: the size of arr
 * @action: function of pointer
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (!array || !action)
		return;
	for (x = 0; x < size; x++)
		action(array[x]);
}
