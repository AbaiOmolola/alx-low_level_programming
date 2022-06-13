#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string followed by a new line
 * @str: parameters
 * Return: Always 0
 */
int _puts(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
