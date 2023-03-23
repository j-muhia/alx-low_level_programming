#include "main.h"
/**
 * print_line - function that draws a straight line
 * @n: number of times '_' will be printed
 * Return: Always 0.
 */

void print_line(int n)
{
	int ln;

	if (n > 0)
	{
		for (ln = 0; ln < n; ln++)
			_putchar('_');
	}
	_putchar('\n');
}
