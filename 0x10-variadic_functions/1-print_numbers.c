#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: pointer of parameter
 * @n: parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list shoe;
	unsigned int r;

	va_start(shoe, n);

	for (r = 0; r < n; r++)
	{
		printf("%d", va_arg(shoe, int));
		if (separator && r < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(shoe);
}
