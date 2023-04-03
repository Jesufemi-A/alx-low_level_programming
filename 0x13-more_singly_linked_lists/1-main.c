#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: head pointer parameter
 * Return: the number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	int num = 0;
	listint_t *traveller = h;

	while (traveller)
	{
		num++;
		traveller = traveller->next
	}
	return (num);
}
