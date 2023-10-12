#include "search_algos.h"

/**
 * print_array - prints  array
 * @array: array to print
 * @start: position of first element
 * @end: position of last element
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t i;
	char *sep = "";

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%s%d", sep, array[i]);
		sep = ", ";
	}
	printf("\n");
}

/**
 * binary_search - function to search  value in already
 * sorted int array
 * using the algorithm - Binary search
 *
 * @array: points to first elemen in the array to search
 * @size: num of elements in array
 * @value: element to be searched
 * Return: -1 or located position of value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);
		middle = (left + right) / 2;

		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
