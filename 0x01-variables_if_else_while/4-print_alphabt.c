#include <stdio.h>
/**
  *main - Entry point
  *Description a program that prints the alphabet in lowercase except q and e
  *Return: 0 (successful)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 133)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
