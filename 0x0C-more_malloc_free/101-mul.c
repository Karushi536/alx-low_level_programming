#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * isNumeric - Check if a string consists of only digits.
 * @str: The string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */

/* Function to check if a string contains only digits*/
int isNumeric(char *str)
{
	while (*str)
	{
	if (*str < '0' || *str > '9')
	{
		return (0);
	}
	str++;
	}
	return (1);
}
/**
 * multiply - Multiply two numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The result of the multiplication.
 */

/* Function to multiply two numbers*/
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

int main(int argc, char *argv[])
{
	char *num1_str;
	char *num2_str;
	int num1, num2, result;

	if (argc != 3)
	{
	printf("Error\n");
	return (98);
	}

	num1_str = argv[1];
	num2_str = argv[2];

	if (!isNumeric(num1_str) || !isNumeric(num2_str))
	{
	printf("Error\n");
	return (98);
	}

	num1 = atoi(num1_str);
	num2 = atoi(num2_str);

	result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}
