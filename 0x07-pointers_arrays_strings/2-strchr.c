#include "main.h"

/**
 * _strchr - locates a character in string 
 *
 * @s: the string to check
 * @c: character we are loking for 
 *
 * Return: a pointer to th first occurence of the character @c in the string 
 * @s. Return NULL if the character isn't found
 */

char *_strchr(char *s, char c)
{
	while(*s)
	{
		if (*s != c)
			s++;
		else 
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
