#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: string parameter
 * Return: returns string
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;

	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; str++)
	{
		size = size + 1;
	}
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size + 1; ++i)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
