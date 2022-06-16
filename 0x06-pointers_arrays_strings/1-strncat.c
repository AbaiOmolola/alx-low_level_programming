#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: number of byte
 *
 * Return: value of dest
 */
char *_strncat(char *dest, char *src, int c)
{
	int m;
	int i;

	m = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		m++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (dest);
}
