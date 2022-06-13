#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps value of 2 integer
 * @a: second integer 
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
