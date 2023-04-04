#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees the list
 * @head: head pointer to the first node
 * Return: returns nothing
 */

void free_listint(listint_t *head)
{
	listint_t *help = head;

	while (help)
	{
		help = head->next;
		free = (head);
		head = help;
	}
}


