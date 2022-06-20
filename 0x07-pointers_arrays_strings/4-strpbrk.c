#include "main.h"

/**
 * _strpbrk - searches a string for any set of byte 
 * @s: first string
 * @accept: second string 
 * Return: pointer to a character or null if no match 
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
