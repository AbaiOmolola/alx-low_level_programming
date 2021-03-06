#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name a print
 * @f: pointer function
 * Return: Always 0
 */
void print_name(char *name, void  (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
