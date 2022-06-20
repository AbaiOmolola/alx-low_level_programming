#include "main.h"
#include <string.h>

/**
 * _memcpy - function that copies memory area
 * from memory area src to memory area des
 * @src: memory area to copy from
 * @dest: memory area to copy to 
 * @n: number of byte
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
