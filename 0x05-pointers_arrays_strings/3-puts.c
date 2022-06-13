#include "main.h"

/**
 * _puts - print string followed by a new line
 * @str: string
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	int str;

	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
