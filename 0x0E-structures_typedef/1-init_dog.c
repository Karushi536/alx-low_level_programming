#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initializes a struct dog with the provided values.
 * @d: pointer to the struct dog to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
		d->name = name;
		d->age = age;
		d->owner = owner;
}
int main(void)
{
	/* This is the main function where the program execution starts*/
	/* It initializes a dog structure and prints some information about the dog*/
	struct dog my_dog;
	char name[] = "poppy";
	char owner[] = "Bob";

	init_dog(&my_dog, name, 3.5, owner);

	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);

	return (0);
}
