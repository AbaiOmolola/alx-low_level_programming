#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array integer
 * @size: number of element
 * @cmp: pointer function
 * Return: -1, if no element matches
 * -1, if size <=
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
