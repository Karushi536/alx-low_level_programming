#include "main.h"
/**
 * _memset - Program fills a block of memory
 * @s: starting address of memory
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: change array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;
	for( n > 0; a++;)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
