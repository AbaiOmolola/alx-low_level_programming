#include "main.h"

/**
 * print_numbers - prints 0 to 9, followed by anew line
 *
 * Return: void
 */
void print_numbers(void)
{
	char k;

	for (k = '0'; k <= '9'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
