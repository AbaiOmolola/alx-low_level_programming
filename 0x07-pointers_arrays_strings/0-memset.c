#include "main.h"
#include <string.h>

/**
 * _memset - function that fills a constant byte 
 * @s: pointer to block of memory to fill
 * @b: this is the value to be set
 * @n: this is the number of byte to set to value 
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
