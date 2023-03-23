#include <stdio.h>
#include <math.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long x, y;
	long z = 612852475143;
	double square = sqrt(z);

	for (x = 1; x <= square; x++)
	{
		if (z % x == 0)
		{
			y = z / x;
		}
	}
	printf("%ld\n", y);
	return (0);
}
