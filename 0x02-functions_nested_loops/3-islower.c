#include "main.h"
#include <ctype.h>

/**
 * int _islower(int c) -  return 1 if c is lowercase
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{

	if (c >= 'a' && c <='z')
		return (1);
	else
		return (0);
}
