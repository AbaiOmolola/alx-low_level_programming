#include "main.h"
#include <stdio.h>

/**
 * m - check for upper case 
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return(1);
	}

	else
		return(0);
}
