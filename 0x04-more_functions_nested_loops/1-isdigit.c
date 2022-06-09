#include "main.h"

/**
 * _isdigit - function checks for digit
 * @c: number to be checked
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
