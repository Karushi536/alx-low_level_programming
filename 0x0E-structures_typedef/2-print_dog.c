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
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			print("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		 if (d->owner == NULL)
			 printf("Owner: (nil)\n");

		 else
			 printf("Owner: %s\n", d->owner);
	}
}
