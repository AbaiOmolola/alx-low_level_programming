#include <stdio.h>

/**
 * main - print first 98
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 2;

	long double fib1 = 1, fib2 = 2, sum;

	printf("1, 2, ");

	while (count < 98)
	{
		sum = fib1 + fib2;
		printf("%.0f", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 97)
			printf("\n");
		else
			printf(", ");
		count++;
	}

	return (0);
}
