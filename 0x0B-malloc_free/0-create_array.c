#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - unction that creates an array of chars, and
 * initializes it with a specific char
 * @size: size of the array
 * @c: the character to be stored
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *prt;

	if (size == 0)
		return (NULL);
	prt = malloc(sizeof(char) * size);

	if (prt == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		prt[i] = c;
	return (prt);
}
