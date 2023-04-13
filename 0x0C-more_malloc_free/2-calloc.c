#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory, NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	int x = 0, m = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	m = nmemb * size;
	a = malloc(m);

	if (a == NULL)
		return (NULL);
	while (x < m)
	{
		a[x] = 0;
		x++;
	}
	return (a);
}
