#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number - integer is a prime number or not
 * @n: Input value
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - function that calculates if a number is prime recursively
 * @n: Iput value
 * @i: iterator
 *
 * Return: 1 if prime, 0 if not
 */
int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}
