#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of argument to be passed
 * @...: variadic symbol
 * Return: returns the sum of all parameters
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	va_start(list, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(list, unsigned int);
	va_end(list);
	return (sum);
}
