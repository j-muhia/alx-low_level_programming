#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 * @...: a variable number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sts;
	char *str;
	unsigned int i;

	va_start(sts, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(sts, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(sts);
}
