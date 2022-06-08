#include "main.h"

/**
 *
 * print_alphabet_x10 - print x10 alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int ch, co;

	co = 0;

	while (co < 10)
	{
		for (ch = 'a'; ch 'z'; ch++)
		{
			_putchar(ch);
		}
		co++;
		_putchar('\n');
	}
}
