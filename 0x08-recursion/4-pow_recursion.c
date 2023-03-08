#include "main.h"

/**
 * _pow_recursion - a function that returns value
 * @x: receives the parameter
 * @y: the power of the argument
 * Return: Always 0 success;
 *
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
