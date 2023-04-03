#include "main.h"
/**
 * _memset -function that fill a block of memory with a constant value
 * @s: starting address
 * @b: constant value
 * @n: amount of bytes of the memory area
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
