#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a funtion to initialize struct
 * @d: first parameter
 * @name: second parameter
 * @age: third parameter
 * @owner: fourth parameter
 *
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
