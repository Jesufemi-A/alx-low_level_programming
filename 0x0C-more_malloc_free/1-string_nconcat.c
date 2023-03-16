#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: parameter for arguement char 1
 * @s2: parameter for arguement char 2
 * @n : the size, probably
 * Return: returns pointer or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	char *ptr;

	int size_s1 = 0;
	int size_s2 = 0;
	int size_n = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		size_s1 = size_s1 + 1;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		size_s2 = size_s2 + 1;
	}
	for (i = 0; i < n; i++)
	{
		size_n = size_n + 1;
	}
	if (n >= s2)
	{
		ptr = malloc(size_s1 + size_s2 + 1);
		if (ptr == NULL)
		{
			return (NULL);
		}
		for (i = 0, j = 0; i < (size_s1 + size_s2 + 1); i++)
		{
			if (i < size_s1)
			{
				ptr[i] = s1[j++];
			}
			else
			{
				j = 0;
				ptr[i] = s2[j++];
			}
		}
		return (ptr);
	}
	else
	{
		ptr = malloc(size_s1 + size_n + 1);
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0, j = 0; i < (size_s1 + size_n + 1); i++)
			{
				if (i < size_s1)
				{
					ptr[i] = size_s1[j++];
				}
				else
				{
					j = 0;
					j < size_n;
					ptr[i] = s2[j++];
				}
			}
		}
		return (ptr);
	}
}
