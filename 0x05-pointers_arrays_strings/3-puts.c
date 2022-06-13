#include "main.h"

/**
 * _puts - function that print strings, followed by a new line 
 * @str: string
 * Return: Always 0
 */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
	{
		_Putchar(str[c]);
	}
	_Putchar('\n');
}
