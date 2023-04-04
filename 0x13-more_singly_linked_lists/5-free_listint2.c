#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: head double pointer
 * Return: void
 */


void free_listint2(listint_t **head)
{
	listint_t *help;

	if (head == NULL)
		return;
	help = *head;

	while (help != NULL)
	{
		help = help->next;
		free(*head);
		*head = help;
	}
}
