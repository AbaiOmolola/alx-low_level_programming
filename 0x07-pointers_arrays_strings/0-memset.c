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
	memset(s, b, n);

	return(s);
}
