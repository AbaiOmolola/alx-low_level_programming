#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print putchar message 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {97, 111, 108, 104, 114, 111, 101};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_Putchar(str[count]);
	}
	_Putchar('\n');
	return (0);
}
