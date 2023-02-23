#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: formal parameter
 * Return: 1 is true or 0 if false
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
