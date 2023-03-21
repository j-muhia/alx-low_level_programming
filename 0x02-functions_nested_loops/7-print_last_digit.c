#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 *@a: input value as an integer
 *
 * Return: last digit
 */
int print_last_digit(int a)
{
	int n;

	n = a % 10;
	if (n < 0)
	{
		_putchar(-n + 48);
		return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}
