#include "main.h"
#include <ctype.h>

/**
 * -isalpha - return 1 if lower or upper case 
 *  @c: single letter output 
 *  Return: Always 0 (Success)
 */
int main(void)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c >= 'Z')))
		return (1);
	else
		return(0);
}
