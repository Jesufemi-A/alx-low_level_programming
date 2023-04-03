#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - sums the length of the element
 * @h: head pointer parameter
 * Return: nunber of element in linked list
 *
 */

size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
