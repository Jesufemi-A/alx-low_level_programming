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
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		node++;
		h = h->next;
	}
	return (node);
}
