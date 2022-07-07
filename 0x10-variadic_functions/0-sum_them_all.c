#include "variadic_functions.h"

/**
 * sum_them_all - retuns the sum of parameters
 * @n: number arguments
 * Return: sum
 * 0, if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list omolola;
	int add = 0;
	unsigned int x;

	if (n == 0)
		return (0);

	va_start(omolola, n);

	for (x = 0; x < n; x++)
		add += va_arg(omolola, int);
	va_end(omolola);
	return (add);
}
