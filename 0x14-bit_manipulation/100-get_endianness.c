#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Programme that checks for endianness.
 *
 * Return: 0 if its a big char / 1 if its a little char
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	if (*c == 1)
		return (1);

	return (0);
}
