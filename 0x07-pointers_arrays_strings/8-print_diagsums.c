#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: input value
 * @size: input value
 * Return: 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int X1 = 0, X2 = 0, i;

	for (i = 0; i < size; i++)
	{
		X1 = X1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		X2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", X1, X2);
}
