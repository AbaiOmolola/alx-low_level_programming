#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Use putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdeghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\');
	return (0);
}
