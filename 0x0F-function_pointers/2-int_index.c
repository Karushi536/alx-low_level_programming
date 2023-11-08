#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index -  function that searches for an integer
 * @array: points to array of inegers
 * @size: no of elements array holds
 * @cmp: pointer to function that return integer and argument integer
 *
 * Return: 0 of first element cmp
 * -1 for no match or negative size
 */
int int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}

	return (-1);
}
