#include <stdio.h>
/**
  *main - Entry point
  *Description: prints all possible combinations of single-digits
  *Return: 0 (successful)
  */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
