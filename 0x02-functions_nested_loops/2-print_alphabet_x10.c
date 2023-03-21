#include "main.h"

/**
  *print_alphabet_x10 - Entry point
  *Description: prints 10 times the alphabet, in lowercase
  *Return: 0 (successful).
  */
void print_alphabet_x10(void)
{
	int j;
	int k;

	for (j = 1; j <= 10; j++)
	{
		for (k = 97; k <= 122; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
