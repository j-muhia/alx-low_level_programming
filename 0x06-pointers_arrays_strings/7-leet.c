#include "main.h"
/**
 * leet - function that encode into 1337
 * @m: input value
 * Return: m
 */
char *leet(char *m)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; m[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (m[i] == s1[j])
			{
				m[i] = s2[j];
			}
		}
	}
	return (m);
}
