#include "main.h"

/**
 * Print_alphabet - Prints alphabets, in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
