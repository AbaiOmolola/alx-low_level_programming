#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: copy to
 * @str: copy from
 *
 * Return: value of dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	
	dest[a] = '\0';
	return(dest);
}
