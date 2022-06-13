#include "main.h"

/**
 * print_rev - function that print strings
 * @s: parameter of function
 * Return: Always 0
 */
void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
	{
	}
	for (c = c - 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
