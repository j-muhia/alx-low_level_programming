#include <stdio.h>
/**
 *main - Entry point
 *Description: a program that prints the alphabet in lowercase and uppercase
 *Return: 0 (successful)
 */
int main(void)
{
	int n = 97;
	int o = 65;

	while (n <= 122)
	{
	putchar(n);
	n++;
	}
	while (o <= 90)
	{
	putchar(o);
	o++;
	}
	putchar('\n');
	return (0);
}
