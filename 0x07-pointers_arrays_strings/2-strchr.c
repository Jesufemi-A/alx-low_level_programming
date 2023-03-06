#include "main.h"

/**
 * _strchr -  function that locates a character in a string.
 * @s: receives argument
 * @c: takes in aarguments
 * Return: Always 0 (Success)
 *
 */

char *_strchr(char *s, char c)
{
	char a[] = "NULL"

	for (; *s != '\0'; ++s)
	{
		if (*s == c)
			return (s);
		else
			return (a);
	}

}
