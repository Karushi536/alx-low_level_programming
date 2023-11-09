#include <stdio.h>
#include <stdarg.h>
/**
* sum_them_all - Calculates the sum of all its parameters.
* @n: the number of arguments
*
* Return: the sum of all the parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int r, sum = 0;

	va_start(ap, unsigned int n);

	sum = 0;

	for (r = 0; r < n; r++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
