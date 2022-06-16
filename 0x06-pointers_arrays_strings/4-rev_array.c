#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: array of integer
 * @n: number of elements of the array
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = a[tmp];
	}
}
