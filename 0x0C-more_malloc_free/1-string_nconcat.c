#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: Input parameter/string to append to
 * @s2: Input parameter/string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string, NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, l1 = 0, l2 = 0;
	char *s;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
	{
		s = malloc(sizeof(char) * (l1 + n + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (l1 + l2 + 1));
	}
	if (!s)
	{
		return (NULL);
	}
	while (x < l1)
	{
		s[x] = s1[x];
		x++;
	}
	while (n < l2 && x < (l1 + n))
	{
		s[x++] = s2[y++];
	}
	while (n >= l2 && x < (l1 + l2))
	{
		s[x++] = s2[y++];
	}
	s[x] = '\0';
	return (s);
}
