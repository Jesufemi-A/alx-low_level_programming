#include "main.h"


/**
 * reset_to_98 - a function that takes value and update to 98
 * @n: receives the parameter
 * Return: Always 0 (Success)
 */


void reset_to_98(int *n)
{
	int a;
	int *b;

	b = &a;
	*b = 98;
	_putchar(*n);
}
