#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - checks for lower characters
 * @c: character to be checked
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	char c;

	c = "A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
