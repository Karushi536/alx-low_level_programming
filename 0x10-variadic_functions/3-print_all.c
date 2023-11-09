#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: parameter
 */
void print_all(const char * const format, ...)
{
	va_list anything;
	unsigned int u = 0, v, w = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(anything, format);
	while (format && format[u])
	{
	v = 0;
	while (t_arg[v])
	{
		if (format[u] == t_arg[v] && w)
		{
			printf(", ");
			break;
		} v++;
	}
		switch (format[u])
	{
	case 'c':
		printf("%c", va_arg(anything, int)), w = 1;
		break;
	case 'i':
		printf("%d", va_arg(anything, int)), w = 1;
		break;
	case 'f':
		printf("%f", va_arg(anything, double)), w = 1;
		break;
	case 's':
		str = va_arg(anything, char *), w = 1;
		if (!str)
	{
		printf("(nil)");
		break;
	}
		printf("%s", str);
		break;
	} u++;
	}
	printf("\n"), va_end(anything);
}
