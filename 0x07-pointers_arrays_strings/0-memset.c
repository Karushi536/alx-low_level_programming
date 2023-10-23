#include "main.h"
#include <stdio.h>
int main(void)
{
	char buffer[10];
	char *result;

	result = _memset(buffer, 'A', 10);

	for (int i = 0; i < 10; i++)
	{
		printf("%c", result[i]);
	}
	printf("\n");
	return (0);
}
