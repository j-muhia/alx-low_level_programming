#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	long j = 1;
	long k = 2;

	while (i < 49)
	{
	if (i == 0)
	{
		printf("%ld", j);
	}
	else if (i == 1)
	{
		printf("%ld", k);
	}
	else
	{
		k += j;
		j = k - j;
		{
			printf("%ld", k);
		}
	}
	++i;
	printf(",");
	printf(" ");
	}
	{
	if (i == 49)
	{
		k += j;
		j = k - j;
		printf("%ld", k);
	}
	}
	printf("\n");
	return (0);
}
