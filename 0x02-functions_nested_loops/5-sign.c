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
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
