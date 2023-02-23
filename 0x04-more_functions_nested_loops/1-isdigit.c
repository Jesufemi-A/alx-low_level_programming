#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: receives parameter
 * Return: digits of numbers
 *
 */


int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
