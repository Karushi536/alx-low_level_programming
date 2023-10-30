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
	(void)argv; /*This line indicates that the 'argv' parameter is intentionally not used*/
	printf("Number of arguments: %d\n", argc - 1);
	return (0);
}
