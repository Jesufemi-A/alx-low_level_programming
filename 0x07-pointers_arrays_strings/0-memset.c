#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: receives parameters
 * @b: takes in inputs
 * @n: parameter for unsigned int
 * Return: Always 0 (Success)
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}

	return (s);

}
