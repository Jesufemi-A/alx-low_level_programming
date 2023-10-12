#include "search_algos.h"
#include <math.h>

/**
 * jump_list - search  value in an already sorted list of
 * ints via algorithm - Jump search
 * @list: points to head node of the list to be searched
 * @size: num of nodes in list
 * @value: searched value
 * Return: NULL or points to first node where value is positioned
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size), i;
	listint_t *current, *prev = NULL;

	if (list == NULL)
		return (NULL);

	current = list;

	while (current->next != NULL && current->n < value)
	{
		prev = current;
		for (i = 0; i < step && current->next != NULL; i++)
			current = current->next;
		printf("Value checked at index [%ld] = [%d]\n", current->index,
				current->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev->index,
			current->index);

	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index,
				prev->n);
		if (prev->n == value)
			return (prev);
		if (prev->n > value)
			break;
		prev = prev->next;
	}

	return (NULL);
}
