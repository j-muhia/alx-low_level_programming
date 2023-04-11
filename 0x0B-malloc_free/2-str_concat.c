#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: 1st input/string to concat
 * @s2: 2nd input/string to concat
 *
 * Return: the two strings concated
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int x = 0, y = 0, z = 0, m = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[x])
		x++;
	while (s2[y])
		y++;
	z = x + y;
	c = malloc((sizeof(char) * z) + 1);
	if (c == NULL)
		return (NULL);
	y = 0;
	while (m < z)
	{
		if (m <= x)
			c[m] = s1[m];
		if (m >= x)
		{
			c[m] = s2[y];
			y++;
		}
		m++;
	}
	c[m] = '\0';
	return (c);
}
