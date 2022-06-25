#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @agrc: argument count 
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int love;

	for (love = 0; love < argc; love++)
	{
		printf("%s\n", argv[love]);
	}

	return (0);
}
