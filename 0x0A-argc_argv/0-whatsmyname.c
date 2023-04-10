#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: number of arguments passed to the program
 * @argv: array of arguments/argument vector
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);

	return (0);
}
