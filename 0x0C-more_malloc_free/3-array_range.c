#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: returns pointers to array
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	int size = 0;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		size = size + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; min++)
		ptr[i++] = min;
	return (ptr);
}
