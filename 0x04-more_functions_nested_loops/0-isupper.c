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
	return (c = 'A' && c <= 'Z');
}
