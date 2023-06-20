#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: (*s1 - *s2)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
