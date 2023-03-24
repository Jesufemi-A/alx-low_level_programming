#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * separator: string in between strings
 * @n: argument for strings
 * @...: variadic function symbol
 * Return: returns void
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *j;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(strings, char *);
		if (j == NULL)
			printf("nil");
		else
			printf("%s", j);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
