#include "main.h"

/**
 * _abs - prints absolute integer 
 * @ab: integer input
 * Return: Always 0 (Sucess)
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
