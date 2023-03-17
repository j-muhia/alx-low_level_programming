#include <stdio.h>
/**
  *main - Entry point
  *Description: program that prints numbers of base 16
  *Return: 0 (successful)
  */
int main(void)
{
	int n;
	int a;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (a = 97; a <= 102; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
