#include "main.h"

/**
 * reverse_array - reverse the constant
 * @a: array of integer
 * @n: number of elements of the array
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
