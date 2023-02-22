#include "main.h"

/**
 * print_sign - prints the sign of a number and returns a value
 * @n: recieves actual parameters
 * Return: Return positive or negative
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
