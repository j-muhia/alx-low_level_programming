#include <stdio.h>
/**
  *main - Entry point
  *Description: prints all single digit numbers of base 10
  *Return: 0 (successful)
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
