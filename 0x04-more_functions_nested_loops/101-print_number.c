#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: Integer
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n *= -1;
		k = n;
		_putchar('-');
	}
	k /= 10;
	if (k != 0)
	print_number(k);
	_putchar((n % 10) + '0');
}
