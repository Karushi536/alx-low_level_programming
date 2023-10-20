#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int count1;
	int count2;

	count1 = 0;
	while (dest[count1] != '\0')
	{
		count1++;
	}
	count2 = 0;
	while (src[count2] != '\0')
	{
		dest[count2] = src[count2];
		count1++;
		count2++;
	}

	dest[count1] = '\0';
	return (dest);
}
