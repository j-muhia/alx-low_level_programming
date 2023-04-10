#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 *@c: Character
 * Return: Return 1 if Uppercase. Else return 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
