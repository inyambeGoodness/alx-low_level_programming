#include <stdio.h>
#include "main.h"

/**
 * main - main function, prints the program name, followed by a new line.
 * @argc: the number of arguments supplied to the program.
 * @argv: an array of arguments.
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
