#include "main.h"

int is_palindrome(char *s);
int palindrome(char *s, int first, int last);
int _strlen_recursion(char *s);

/**
 * is_palindrome - string is a palindrome
 * @s: int type
 * Return: char type
 */
int is_palindrome(char *s)
{
	int first, last;

	first = 0;
	last = _strlen_recursion(s) - 1;

	return (palindrome(s, first, last));
}
/**
 * palindrome - palindrome
 * @s: char type
 * @first: int type
 * @last: int type
 * Return: recursion
 */
int palindrome(char *s, int first, int last)
{
	if (first > last)
	{
		return (1);
	}
	else if (s[first] == s[last])
	{
		return (palindrome(s, first + 1, last - 1));
	}
	else
	{
		return (0);
	}

}
/**
 * _strlen_recursion - _strlen_recursion
 * @s: char type
 * Return: function that returns the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
