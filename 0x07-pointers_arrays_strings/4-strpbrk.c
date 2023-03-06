#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: receives argument
 * @accept: takes in the argument
 * Return: Always 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				return (s[a]);
						break;
		}
		if (s[a] == '\0')
		return ('\0');
	}
}
