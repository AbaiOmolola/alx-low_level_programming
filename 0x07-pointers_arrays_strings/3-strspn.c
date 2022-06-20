#include "main.h"
#include <string.h>

/**
 * _strspn - returns number of byte 
 * @s: for count action '
 * @accept: parameter for char
 * Return: int from s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == NULL) || (accept == NULL))
		return (len);

	while (*s && strchr(accept, *s++))
	{
		len++;
	}

	return (len);
}
