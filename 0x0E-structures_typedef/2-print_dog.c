#include <stdio.h>
#include "dog.h"
#definr NILL "(nil)"
/**
 * print_dog - prints content of struct dog
 *
 * @d: pointer of struct
 *
 * Return: always void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d=> == NILL;
	if (d->owner == NULL)
		d-> == NILL;
	printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
