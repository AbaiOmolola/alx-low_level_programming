#include "main.h"

/**
 * _memcpy - copies area 
 *
 * @dest: where to copy memory to 
 * @n: number of byte
 * @src: memory area to copy from
 * 
 * Return: Pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
