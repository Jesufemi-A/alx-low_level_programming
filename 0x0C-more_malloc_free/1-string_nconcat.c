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
	unsigned int i;
	char *ptr;

	unsigned int size_s1 = 0;
	unsigned int size_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		size_s1 = size_s1 + 1;
	for (i = 0; s2[i] != '\0'; i++)
		size_s2 = size_s2 + 1;
	if (n >= size_s2)
		n = size_s2;
	ptr = malloc(sizeof(char) * (size_s1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size_s1; i++)
		ptr[i]  = s1[i];
	for (i = 0; i < n; i++)
		ptr[size_s1 + i] = s2[i];
	ptr[size_s1 + n] = '\0';
	return (ptr);
}
