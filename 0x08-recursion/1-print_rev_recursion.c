#include "main.h"
#include <stdio.h>
#include <string.h>
void printStringReverse(const char *str)
	int length = strlen(str);
	for (int i = length -1; i >= 0; i--)
{
	putchar(str[i]);
}
putchar('\n');
}
int main(void)
{
	const char *str = "Hello, world!";
	printStringReverse(str);
	return (0);
}
