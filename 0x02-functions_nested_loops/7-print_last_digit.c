#include "main.h"

/**
 * print_last_digit - pritn last digit of a number
 * @nld: numbers last digit result
 * Return: Always 0 (Sucess)
 */
int print_last_digit(int nld)
{

	int pld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}
