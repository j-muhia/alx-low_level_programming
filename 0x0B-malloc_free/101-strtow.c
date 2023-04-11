#include "main.h"
#include <stdlib.h>

int count_word(char *s);
char **strtow(char *str);

/**
 * count_word - counts the number of words in a string
 * @s: string of interest
 *
 * Return: count
 */
int count_word(char *s)
{
	int f, a, b;

	f = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			b++;
		}
	}

	return (b);
}
/**
 * **strtow - function that splits a string into words
 * @str: string of interest
 *
 * Return: pointer to an array of strings or NULL
 */
char **strtow(char *str)
{
	char **mx, *t;
	int x, k = 0, ln = 0, words, a = 0, start, end;

	while (*(str + ln))
		ln++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	mx = (char **) malloc(sizeof(char *) * (words + 1));
	if (mx == NULL)
		return (NULL);

	for (x = 0; x <= ln; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (a)
			{
				end = x;
				t = (char *) malloc(sizeof(char) * (a + 1));
				if (t == NULL)
					return (NULL);
				while (start < end)
					*t++ = str[start++];
				*t = '\0';
				mx[k] = t - a;
				k++;
				a = 0;
			}
		}
		else if (a++ == 0)
			start = x;
	}
	mx[k] = NULL;
	return (mx);
}
