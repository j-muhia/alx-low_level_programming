#include "main.h"
/**
 * print_numbers - function that prints the numbers
 *
 * Return: The numbers
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar (a + '0');
	}
	_putchar('\n');
}
