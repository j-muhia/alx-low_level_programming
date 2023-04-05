#include "main.h"

int c_p(char *s, int i, int j);
int _str_j_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (c_p(s, 0, _str_j_recursion(s)));
}

/**
 * _str_j_recursion - returns the length of a string
 * @s: string or parameter in question
 *
 * Return: length of the string
 */
int _str_j_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _str_j_recursion(s + 1));
}

/**
 * c_p - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @j: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int c_p(char *s, int i, int j)
{
	if (*(s + i) != *(s + j - 1))
		return (0);
	if (i >= j)
		return (1);
	return (c_p(s, i + 1, j - 1));
}
