#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: The source string to duplicate.
 *
 * Returns: *pnt
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
