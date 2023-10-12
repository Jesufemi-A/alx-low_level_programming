#include "search_algos.h"

/**
 * print_array - print array
 * @array: points to  array that will be printed
 * @start: position of first array member
 * @end: position of last array member
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
 * binary_search_rec - search value in an sorted int array
 * via algorithm Binary search algorithm through recursion
 *
 * @array: points to the first member of array to search
 * @start: position of first array member
 * @end: postion of last array member
 * @value: searched
 *
 * Return: -1 or position of located value
 */

int binary_search_rec(int *array, size_t start, size_t end, int value)
{
	size_t middle;

	if (start <= end)
	{
		print_array(array, start, end);
		middle = (start + end) / 2;

		if (array[middle] == value && array[middle - 1] != value)
			return (middle);
		else if (array[middle] < value)
			return (binary_search_rec(array, middle + 1, end, value));
		else
			return (binary_search_rec(array, start, middle, value));
	}
	return (-1);
}

/**
 * advanced_binary - search for a value in an already
 * sorted int array via recursion
 *
 * @array: a pointer to the first element of the array to search in
 * @size: number of member in an array
 * @value: searched value
 *
 * Return: -1 or position where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_search_rec(array, 0, size - 1, value));

}
