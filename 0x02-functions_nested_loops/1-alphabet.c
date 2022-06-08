#include "main.h"

/**
 * Print_alphabet - Prints the alphabets, in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
void Print_alphabet(void)
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
