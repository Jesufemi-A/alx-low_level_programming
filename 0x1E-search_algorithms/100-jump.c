#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches  value in already
 * sorted array of
 * int via - algorithm Jump search
 *
 * @array: points to the first element in array to search
 * @size: num of elements in array
 * @value: value to be searched for
 *
 * Return: -1 or returns the first index of located value
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = 0, prev_step = 0;

	if (!array)
		return (-1);
	/* begin block search */
	while (array[step] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step,
				array[step]);
		prev_step = step;
		step += sqrt(size);
		if (step >= size)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev_step,
			step);
	/* begin linear search in  locate block */
	while (array[prev_step] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev_step,
				array[prev_step]);
		prev_step++;
		if (prev_step >= size)
			return (-1);
	}
	/* ensure that value is located */
	if (array[prev_step] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev_step,
				array[prev_step]);
		return (prev_step);
	}
	return (-1);
}
