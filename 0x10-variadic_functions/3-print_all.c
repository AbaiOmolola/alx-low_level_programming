#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of argument
 * Return: Always 0
 */
void print_all(const char * const format, ...)
{
	va_list omolola;
	unsigned int a = 0, b, c = 0;
	char *kng;
	const char t_arg[] = "cifs";

	va_start(omolola, format);
	while (format && format[a])
	{
		b = 0;
		while (t_arg[b])
		{
			if (format[a] == t_arg[b] && c)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(omolola, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(omolola, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(omolola, double)), c = 1;
			break;
		case 's':
			kng = va_arg(omolola, char *), c = 1;
			if (!kng)
			{
				printf("(nil)");
				break;
			}
			printf("%s", kng);
			break;
		} a++;
	}
	va_end(omolola);
	printf("\n");
}

