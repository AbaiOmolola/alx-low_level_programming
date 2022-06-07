#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _putchar - Writed character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, errno is set appropriately
 */
int _Putchar(char c)
{
	return (write(1, &c, 1));
}