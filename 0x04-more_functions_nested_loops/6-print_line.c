#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: input of time to print
 * Return: a stright line
 */
void print_line(int n)
{
	int z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (z = 1; z <= n; z++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
