#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * create_array - creates an array of chars and init it
 * @size: size of the array
 * @c: argument for char
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;


	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
