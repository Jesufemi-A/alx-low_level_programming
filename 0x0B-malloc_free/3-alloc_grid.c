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
	int h, w;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(*ptr) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		ptr[h] = malloc(sizeof(**ptr) * width);
		if (ptr[h] == NULL)
		{
			for (h--; h >= 0; h--)
				free(ptr[h]);
			free(ptr);
			return (NULL);
		}
		for (w = 0; w < height; w++)
		{
			ptr[h][w] = 0;
		}
	}
	return (ptr);
}
