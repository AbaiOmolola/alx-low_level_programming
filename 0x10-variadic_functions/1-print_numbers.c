#include "variadic_functions"

/**
 * print_numbers - print numbers
 * followed by a new line 
 * @separator: string to be printed 
 * @n: number of integers passed 
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list omolola;
	unsigned int x;

	va_start(omolola, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(omolola, int));
		if (x < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(omolola);
	printf("\n");
}
