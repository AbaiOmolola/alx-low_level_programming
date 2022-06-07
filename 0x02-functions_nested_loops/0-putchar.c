#include <unistd.h>
#include "main.h"

/**
 * main -  Program prints _putchar
 *
 * Return: on success 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1)); 
	
}
