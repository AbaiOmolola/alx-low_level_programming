#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main -  Program prints _putchar
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
