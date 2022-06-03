#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determining if last digit is greater than five, zero or less than six 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (1 == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("last digit of %d is %d is less than 6 and not 0\n", n, l);
	}
	return (0);
}
