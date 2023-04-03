#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of the linked list
 * @head: double pointer parameter
 * @n: data of the new node
 * Return: return the address of the new element
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *swap;
	listint_t *end;

	if (*head != NULL)
	{
		end = *head;
		swap = malloc(sizeof(listint_t));
		if (swap == NULL)
			return (NULL);
		swap->n = n;
		swap->next = NULL;
		while (end->next != NULL)
			end = end->next;
		end->next = swap;
	}
	return (swap);
}

