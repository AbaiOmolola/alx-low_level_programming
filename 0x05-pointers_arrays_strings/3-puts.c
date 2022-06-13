#include "main.h"

/**
 * _puts - prints string followed by a new line
 * @str: parameters
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str)
		_putchar(str++);

	_putchar('\n');
}
