#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print putchar message 
 *
 * Return: Always 0 (Success)
 */
int main(void)
gcc -o _putchar.c _putchar.h
{
	int str[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		Putchar(str[count]);
	}
	Putchar('\n');
	return (0);
}
