#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints the details of a struct dog.
 * @d: Pointer to a struct dog to be printed.
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.1f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}