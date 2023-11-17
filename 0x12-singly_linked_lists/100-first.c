#include "lists.h"
#include <stdio.h>

/**
 * word_out - a function executed before main is executed
 * Return: void
 */

void __attribute__((constructor)) word_out()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
