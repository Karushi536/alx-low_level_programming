#include "3-calc.h"

/**
 * op_add - add two integers
 * @a: parameter int 1
 * @b: parameter int 2
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two int values
 * @a: int value 1
 * @b: int value 2
 *
 * Return: a and b difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: parameter int 1
 * @b: parameter int 2
 *
 * Return: product for int a, b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - provide result for division of two integer values
 * @a: int value 1
 * @b: int value 2
 *
 * Return: quotient for a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculate remainder for division of two allocated int values
 * @a: parameter integer 1
 * @b: parameter integer 2
 *  Return: remainder of b from division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
