#include "main.h"
/**
 *print_alphabet - Entry point
 *Description a program that prints the alphabet in lowercase
 *Return: 0 (successful)
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
