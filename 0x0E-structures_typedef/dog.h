#ifndef DOG_H
#define DOG_H

/**
 * dogh - defining a struct dog with the following elements
 * struct dog - dogs basic description
 * name: that stores the name of the dog
 * age: represents the age of the dog
 * owner: stores the name of the dog's owner
 *
 * Return: Always 0
 */
struct dog
{
	char *name; /* Name of the dog */
	float age; /* Age of the dog*/
	char *owner; /* Owner's name*/
};

int dogh(void)
{
	struct dog user;

	user.name = "Poppy";
	user.age = 3.5;
	user.owner = "Bob";

	printf("Name: %s\n", user.name);
	printf("Age: %.1f\n", user.age);
	printf("Owner; %s\n", user.owner);

	return (0);
}
#endif
