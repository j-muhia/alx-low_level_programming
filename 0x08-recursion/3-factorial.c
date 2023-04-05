#include "main.h"

/**
 * factorial - function that returns the factorial of a number
 * @n: Input value or parameter
 *
 * Return: Result, Integer value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
