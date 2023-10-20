#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int r;
	int z;

	for (r = 0; r < n--; r++)
	{
		z = a[r];
		a[r] = a[n];
		a[n] = z;
	}
}
