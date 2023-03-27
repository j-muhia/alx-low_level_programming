#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: String to be modified.
 * Return: void
 */
void rev_string(char *s)
{
	int ln = 0, i = 0;
	char tmp;

	while (s[i++])
	ln++;
	for (i = ln - 1; i >= ln / 2; i--)
	{
		tmp = s[i];
		s[i] = s[ln - i - 1];
		s[ln - i - 1] = tmp;
	}
}
