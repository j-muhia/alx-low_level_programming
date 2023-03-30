#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Value (Max number of bytes to be copied from src)
 * Return: Void (Pointer to the resulting string destination)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, slen = 0;

	while (src[index++])
	{
		slen++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}

	for (index = slen; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
