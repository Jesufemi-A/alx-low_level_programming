#include "search_algos.h"

/**
 * linear_skip - search value in an already sorted
 * skip list of ints
 *
 * @list: points to head of the skip list to be searched
 * @value: searched value
 * Return: points to first node where value is positioned
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = list, *prev = list;

	if (list == NULL)
		return (NULL);


	while (current->next != NULL && current->n < value)
	{
		prev = current;
		if (current->express != NULL)
		{
			current = current->express;
			printf("Value checked at index [%ld] = [%d]\n", current->index,
				current->n);
		}
		else
		{
			while (current->next != NULL)
				current = current->next;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev->index,
			current->index);
	while (prev != current->next && prev->n <= value)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index,
				prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
