#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments
 * @argc: number of argument
 * @argv: array of arguments
 *
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	(void)argv; /*This 'argv' parameter is intentionally not used*/
	printf("%d\n", argc - 1);
	return (0);
}
