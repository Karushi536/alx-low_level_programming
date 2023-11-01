#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - Duplicates a string and allocates memory for the copy.
 * @str: char
 *
 * Returns: a pointer to the duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	int length;
	size_t length = strlen(str);
	char *duplicate = (char *)malloc(length + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
