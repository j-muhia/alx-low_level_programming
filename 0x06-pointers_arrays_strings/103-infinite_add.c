#include "main.h"

/**
 * rev_string - function that will reverse array
 * @n: Input parameters.
 * Return: 0 (successful)
 */

void rev_string(char *n)
{
	int a = 0;
	int b = 0;
	char t;

	while (*(n + a) != '\0')
	{
		a++;
	}
	a--;
	for (b = 0; b < a; b++, a--)
	{
		t = *(n + b);
		*(n + b) = *(n + a);
		*(n + a) = t;
	}
}

/**
 * infinite_add - function that adds two numbers
 * @n1: First input value.
 * @n2: Second input value.
 * @r: the buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: r (if not 0)
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ov = 0, a = 0, b = 0, d = 0;
	int v1 = 0, v2 = 0, t2 = 0;

	while (*(n1 + a) != '\0')
	a++;
	while (*(n2 + b) != '\0')
	b++;
	a--;
	b--;
	if (b >= size_r || a >= size_r)
		return (0);
	while (b >= 0 || a >= 0 || ov == 1)
	{
		if (a < 0)
			v1 = 0;
		else
			v1 = *(n1 + a) - '0';
		if (b < 0)
			v2 = 0;
		else
			v2 = *(n2 + b) - '0';
		t2 = v1 + v2 + ov;
		if (t2 >= 10)
			ov = 1;
		else
			ov = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (t2 % 10) + '0';
		d++;
		b--;
		a--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	rev_string(r);
	return (r);
}
