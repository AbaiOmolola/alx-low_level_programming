#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in string
 * @s: the string to check
 * @c: character we are loking for
 * Return: a pointer to th first occurence of the character @c in the string
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return(s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
