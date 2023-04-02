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

	traveller = head;

	while (traveller != NULL)
	{
		list_t *present = traveller;

		free(traveller);
		traveller = present;

		if (traveller == NULL)
		{
			free(present);
			free(traveller);
		}
	}
	free(head);
}
