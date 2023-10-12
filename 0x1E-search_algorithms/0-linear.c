#include "search_algos.h"

/**
 * linear_search - function to search value in array
 * of int using the algorithm - linear search
 * @array: points to  first member of  array to search in
 * @size: the num of elements in array
 * @value: value searched for
 * Return: -1 or  first position of value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
