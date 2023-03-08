#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: takes in argument
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{
	static int sum = 0;

	if (*s )
	{
		sum = sum + 1;
		_strlen_recursion(s + 1);
	}
	return (sum);
}
