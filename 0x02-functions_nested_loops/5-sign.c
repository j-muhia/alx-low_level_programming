#include "main.h"

/**
 * print_sign - Function determines if input is greater,
 * equal or less than zero
 *
 *@n: input as an integer
 *Description: Function that prints the sign of a number
 * Return: 1 if greater than zero.0 is zero. -1 if less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
	_putchar('\n');
}
