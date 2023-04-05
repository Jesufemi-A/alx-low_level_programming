#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - reverse a linked list
 * @head: head double pointer
 * Return: a reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *help;
	listint_t *traveller;

	help = NULL;
	traveller = NULL;

	while (*head != NULL)
	{
		traveller = (*head)->next;
		(*head)->next = help;
		help = *head;
		*head = traveller;
	}
	*head = help;
	return (*head);
}
