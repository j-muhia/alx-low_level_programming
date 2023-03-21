#include <main.h>
/**
  *main - Entry point
  *Description: print alphabet X10
  *Return: Always 0
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
		return (0);
	}
}
