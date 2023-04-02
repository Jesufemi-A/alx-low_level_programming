#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t list
 * @head: head pointer
 * Return: void function
 */

void free_list(list_t *head)
{
	list_t *traveller;

	while (head)
	{
		traveller = head;
		head = head->next;
		free(traveller->str);
		free(traveller);
	}
	free(head);
}
