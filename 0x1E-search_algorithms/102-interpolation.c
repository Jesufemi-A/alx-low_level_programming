#include "search_algos.h"

/**
 * interpolation_search -  search a value in an already
 * sorted array of
 * ints via - algorithm -Interpolation search
 *
 * @array: points to first member of array to  be searched
 * @size: numof memebers in array
 * @value: searched value
 * Return: -1 or position where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (!array)
		return (-1);

	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		if (array[pos] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			return (pos);
		}

		if (array[pos] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			low = pos + 1;
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			high = pos - 1;
		}
	}
	return (-1);
}
