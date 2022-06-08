#include "main.h"
#include <ctype.h>

/**
 * _isalpha - return 1 if c is lower or uppercase
 *  @c: singe letter output
 *  Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c >= 'Z')))
		return (1);
	else
		return(0);
}
