#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - 100 comb3
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e;

	i = 48;
	e =48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}