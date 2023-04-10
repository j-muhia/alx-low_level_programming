#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Input value
 * Return: Void (Pointer to the resulting string destination)
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dlen = 0;

	while (dest[index++])
	{
		dlen++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[dlen++] = src[index];
	}
	return (dest);
}
