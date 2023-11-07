#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - dogs basic description
 * @name: that stores the name of the dog
 * @age: represents the age of the dog
 * @owner: stores the name of the dog's owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name; /* Name of the dog */
	float age; /* Age of the dog*/
	char *owner; /* Owner's name*/
};

/**
 * dog_t - typedef for struct dog
 *
 */

typedef struct dog dog_t;

#include <stdlib.h>
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
