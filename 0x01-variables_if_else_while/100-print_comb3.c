#include <stdio.h>
/**
  *main - Entry point
  *Description:prints all possible different combinations of two digits
  *Return: 0 (successful)
  */
int main(void)
{
	int m;
	int n;

	for (m = 0 ; m < 10 ; m++)
	{
		for (n = 1 ; n < 10 ; n++)
		{
			if (m < n && m != n)
			{
				putchar(m + '0');
				putchar(n + '0');
				if (m + n != 17)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
		putchar('\n');
		return (0);
}
