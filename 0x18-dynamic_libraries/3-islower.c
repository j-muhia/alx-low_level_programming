#include "main.h"
/**
  *_islower - Shows 1 if the input is a lower case character.
  *Other cases will display 0.
  *@c: Character in ASCII code
  *Description:  function that checks for lowercase character
  *
  *Return: 1 if character is lowercase. 0 for the rest
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
