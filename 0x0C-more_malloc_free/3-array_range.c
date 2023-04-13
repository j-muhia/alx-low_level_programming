#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * @min: minimum range of parameter
 * @max: maximum range of parameter and nm of elements
 *
 * Return: pointer to the new array, NULL if it fails
 */
int *array_range(int min, int max)
{
	int *p;
	int d, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (d = 0; min <= max; d++)
		p[d] = min++;

	return (p);
}
