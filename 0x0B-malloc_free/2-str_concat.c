#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - a function that concatenates two strings.
 * @s1: receives the first string
 * @s2: recieves the secondstring
 * Return: return a cat string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;

	int size_s1 = 0;
	int size_s2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[size_s1] != '\0')
	{
		size_s1++;
	}
	while (s2[size_s2] != '\0')
	{
		size_s2++;
	}
	ptr = malloc((sizeof(char) * size_s1) + (sizeof(char) * size_s2) + 1);
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < (size_s1 + size_s2 + 1); i++)
	{
		if (i < size_s1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[j++];

	}
	return (ptr);
}
