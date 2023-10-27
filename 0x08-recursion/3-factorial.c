#include "main.h"
#include <stdio.h>
/**
 * factorial - Calculate the factorial of a given number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of the given number. If n is less than 0, return -1.
 *         If n is 0, return 1.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		int result = (1);
		int i;

		for (i = 1; i <= n; i++)
		{
			result *= i;
		}
		return (result);
	}
}
/**
 * main - Entry point of the program. Test the factorial function.
 *
 * Return: Always 0.
 */
int main(void)
{
	int number = 5;
	int result = factorial(number);

		if (result == -1)
		{
			printf("Error: The factorial of a negative number is not defined.\n");
		}
		else
		{
			printf("The factorial of %d is %d\n", number, result);
		}

		return (0);
}
