#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Output all items in the Double LL
 * @h: points to the head node of the DLL
 * Return: num of  node in DLL
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
