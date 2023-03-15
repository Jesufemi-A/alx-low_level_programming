#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2D int array
 * @width: parameter for the width
 * @height: paramter for the height
 * Return: returns pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0, j = 0; i < height && j < width; i++)
	{
		ptr[i][j] = 0;
		for (; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
