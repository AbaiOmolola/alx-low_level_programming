#include "main.h"

/**
 * _memset - fills memeory with constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: bytes filled
 *
 * Return: a pointer to memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
