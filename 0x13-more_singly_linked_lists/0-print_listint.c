#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements in the list
 * @h: head pointer parameter
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int num = 0;
	const listint_t *traveller = h;

	while (traveller)
	{
		num++;
		printf("%d\n", traveller->n);
		traveller = traveller->next;
	}
	return (num);
}
