#include "main.h"

/**
 * _memset - fills memeory with constant byte
 * @s: memory area
 * @b: constant byte
 * @bytes filled
 * Return: nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
