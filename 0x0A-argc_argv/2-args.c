#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: number of arguments passed to the program
 * @argv: array of arguments/argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int s;

	for (s = 0; s < argc; s++)
	{
		printf("%s\n", argv[s]);
	}

	return (0);
}
