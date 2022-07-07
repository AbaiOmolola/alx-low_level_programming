#include "variadic_functions.h"

/**
 * print_strings - print string
 * followed by a new line
 * @separator: string to be printed
 * @n: number of strings passed
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	
	va_list omolola;
	unsigned int x;
	char *kng;

	va_start(omolola, n);
	for (x = 0; x < n; x++)
	{
		kng = va_arg(omolola, char *);
		if (!kng)
			printf("(nil)");
		else
		{
			printf("%s", kng);
			if (x < n - 1 && separator)
				printf("%s", separator);
		}
	}
	va_end(omolola);
	printf("\n");
}
