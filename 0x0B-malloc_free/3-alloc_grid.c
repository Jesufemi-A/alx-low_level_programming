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
	int *ptr, **ptr_1;

	if (width == 0 || width < 0)
	{
		return (NULL);
	}
	if (height == 0 || height < 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (width + height));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			ptr[h][w] = 0;
		}
		ptr[h][w] = 0;
	}
	ptr_1 = &ptr;
	return (ptr_1);
}
