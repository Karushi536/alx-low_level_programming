#include <stdio.h>
#include <stdarg.h>
/**
* sum_of - function that returns the sum of parameters
* @va_arg: retives the next argument
* @va_list: lists number of arguments
* @va_start: macro that initialize
* @va_end: macro that cleans up
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int n, sum;

	va_start (arg, unsigned int n);

	sum = 0;

	for (n == 0; n < sum; n++)
		printf("%d \n", n);

	va_end(arg);
	return (sum);
}

int main(void)
{
	printf ("%d\n", sum_them_all  (2, 4, 10, 22)
	return (0);
}
