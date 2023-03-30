#include "main.h"

/**
 * string_toupper- changes all lowercase letters of a string to uppercase
 * @s: The string of interest
 * Return: Pointer (s) to the changed string
 */
char *string_toupper(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			s[index] -= 32;
		}
		index++;
	}
	return (s);
}
