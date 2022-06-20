#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer with memory area to fill
 * @n: number of byte 
 * @b: constant byte
 *
 * Return: to memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return(s);
}
