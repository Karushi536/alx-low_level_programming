#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that adds positive numbers
 * argc: number of arguments
 * argv: array of arguments
 *
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	if (argc == 1)

	{
		printf("0\n");
		return (0);
	}
	char *arg;
	int num, j;

	while (i < argc)
	{
		char *arg = argv[i];

		num = 0;
		j = 0;

		while (arg[j] != '\0')
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (arg[j] - '0');
			j++;
		}
		sum += num;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
