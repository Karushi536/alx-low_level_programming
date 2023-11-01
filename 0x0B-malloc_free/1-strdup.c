#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - Duplicates a string and allocates memory for the copy.
 * @str: char
 *
 * Returns: *pnt success
 */
char *_strdup(char *str)
{
	int k;
	char *pnt;
	int j = 0;

	if (str == NULL)
		return (NULL);
	for (k = 0; str[k] != '\0'; k++)
		j++;

	pnt = malloc(sizeof(char) * j + 1);

	if (pnt == NULL)
		return (NULL);
	for (k = 0; str[k] != '\0'; k++)
		pnt[k] = str[k];

	return (pnt);

}
