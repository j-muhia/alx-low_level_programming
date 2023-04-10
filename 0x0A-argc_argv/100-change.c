#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of arguments passed to the program
 * @argv: array of arguments/argument vector
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int nm, i, total;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	nm = atoi(argv[1]);
	total = 0;
	if (nm < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && nm >= 0; i++)
	{
		while (nm >= coins[i])
		{
			total++;
			nm -= coins[i];
		}
	}
	printf("%d\n", total);
	return (0);
}
