#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: Input parameter or value.
 *
 * Return: The length, integer value.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{s++;
	return (_strlen_recursion(s) + 1);
	}
}
