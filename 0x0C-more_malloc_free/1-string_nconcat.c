#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - Concatenates two strings with a maximum length from the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	unsigned int len_s1 = strlen(s1);
	unsigned int len_s2 = strlen(s2);

	if (n >= len_s2)
	{
		n = len_s2;
	}
	unsigned int total_length = len_s1 + n;

	char *result = (char *)malloc(total_length + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strncat(result, s2, n);
	return (result);
}
int main(void)
{
	char *s1 = "Hello, ";
	char *s2 = "World!";
	unsigned int n = 7;

	char *concatenated = string_nconcat(s1, s2, n);

	if (concatenated != NULL)
	{
		printf("Concatenated string: %s\n", concatenated);
		free(concatenated);
	}
	else
	{
		printf("Failed to concatenate strings.\n");
	}
	return (0);
}


