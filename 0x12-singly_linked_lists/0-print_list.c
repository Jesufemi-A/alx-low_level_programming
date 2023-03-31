#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: parameter for the head pointer node
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("%s\n%u", h->str, h->len);
		node = node + 1;
		h = h->next;
	}
	return (node);
}
