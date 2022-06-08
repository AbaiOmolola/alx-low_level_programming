#include "main.h"
#include <stdio.h>

/**
 * print _to_98 - print all natural numbers
 * @n: number input 
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d",n);
			if (n != 98)
			{
				printf(",");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d",n);
			if (n !=n 98)
			{
				printf(",");
			}
			n--;
		}
	}
	else
	{
		print("98");
	}
	printf("\n");
}
