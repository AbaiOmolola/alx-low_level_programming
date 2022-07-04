#include "dog.h"
#define NULL (void *)0
/**
 * init_dog - initializes dog structure
 *
 * @d: struct to intialize
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: always void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
