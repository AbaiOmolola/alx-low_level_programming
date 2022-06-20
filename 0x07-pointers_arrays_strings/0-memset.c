#include "main.h"

/**
 * _memset - fills memeory with constant byte
 * @s: memoriy area
 * @b: constant byte
 * @n:bytes filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}

	return (s);
}
