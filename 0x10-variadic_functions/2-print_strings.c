#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: pointer parameter
 * @n: parameter
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list parameter;
	unsigned int  r;
	char *str;

	va_start(parameter, n);

	for (r = 0; r < n; r++)
	{
		str = va_arg(parameter, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (r < n - 1)
		if (separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(parameter);
}
