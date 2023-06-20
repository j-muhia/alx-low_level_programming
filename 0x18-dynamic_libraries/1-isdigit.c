#include "main.h"

/**
 * _isdigit - function that checks for a digit
 *@c: integer to be checked
 * Return: Return 1 if digit. Else 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
