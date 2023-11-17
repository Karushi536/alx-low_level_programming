#include <stdio.h>
/**
 * before_ main - Function executed before main.
 *
 * Return: Always 0.
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
