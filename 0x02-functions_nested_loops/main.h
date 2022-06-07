#include <stdio.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str [] = {72, 11, 108, 98, 101, 114, 116, 111, 110};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		putchar(str[count]);
	}
	putchar('\n');
	return (0);
}
