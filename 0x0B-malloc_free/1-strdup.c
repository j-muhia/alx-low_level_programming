#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: the string to duplicate
 *
 * Return: string duplicated
 */
char *_strdup(char *str)
{
	char *b;
	int i = 0, q = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	b = malloc((sizeof(char) * i) + 1);

	if (b == NULL)
	{
		return (NULL);
	}
	for (q = 0; str[q]; q++)
	{
		b[q] = str[q];
	}
	return (b);
}
