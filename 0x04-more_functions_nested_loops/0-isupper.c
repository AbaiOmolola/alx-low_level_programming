#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for lower characters
 * @c: character to be checked
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
