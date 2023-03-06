#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: receives parameters
 * @accept: takes input
 * Return: Always 0 (Success)
 */



unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i]; ++i)
	{
		if (s[i] != '\0')
		{
			for (j = 0; accept[j]; j++)
			{
				if (s[i] == accept[j])
				{
					count = count + 1;
					break;
				}
				if (accept[j] == '\0')
					break;
			}
		}
		else
			break;
	}
	return (count);
}
