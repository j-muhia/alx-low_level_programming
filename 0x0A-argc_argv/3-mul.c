#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments passed to the program
 * @argv: array of arguments/argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0, j = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
