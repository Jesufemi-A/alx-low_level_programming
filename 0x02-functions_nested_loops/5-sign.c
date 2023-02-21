#include "main.h"

/**
 * print_sign(int n) -  prints the sign of a number
 * Return: Always 0 (Success)
 */


int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	if (n < 0)
	{
		return (-1);
		_putchar (-);
	}
}
