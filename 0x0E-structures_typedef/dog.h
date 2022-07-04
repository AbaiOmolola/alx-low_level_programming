#include <stdio.h>
#include "dog.h"

/**
 * main - create struct
 *
 * Return: always 0
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Crypto";
	my_dog.age = 3;
	my_dog.owner = "LOLA";
	printf("my name is %5, and I am %.1f :) -woof!\n", my_dog.name, my_dog.age);
	return (0);
}
