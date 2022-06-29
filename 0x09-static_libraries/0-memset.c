#include "main.h"
#include <string.h>

/**
 * _memset - function that fills memory with a constant byte
 * pointed to by s with the constant byte
 * @s: pointer to the block of memeory to fill
 * @b: this is the value to be set
 * @n: this is the numbe rof byte to set to the value
 * Return: Pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
