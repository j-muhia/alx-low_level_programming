#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *@a: First integer
 *@b: Second interger
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
