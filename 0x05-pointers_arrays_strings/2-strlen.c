#include "main.h"

/**
 * _strlen - Function that returns the length of a string.
 * @s: The string to get the length.
 * Return: Length of @s.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
