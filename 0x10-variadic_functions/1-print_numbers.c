#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: return void
 *
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	
	int j = 0;

	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(numbers, unsigned int);
		printf("%d", j);
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
