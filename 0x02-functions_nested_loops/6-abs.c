#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @i: input value as an integer
 *
 * Return: Always 0.
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
