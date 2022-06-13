#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _puts - print string followed by a new line
 * @str: parameter
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
