#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: head pointer parameter
 * @index: index number
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i, length;
	listint_t *help, *traveller;

	i = 0;
	length = 0;
	if (*head == NULL)
		return (-1);
	help = *head;
	traveller = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(help);
		return (1);
	}
	while (traveller)
	{
		length++;
		traveller = traveller->next;
	}
	traveller = *head;
	if (index > length - 1)
		return (-1);
	for (i = 0; i < index; i++)
		traveller = traveller->next;
	if (index == length - 1)
	{
		free(traveller->next);
		traveller->next = NULL;
		return (-1);
	}
	for (i = 0; i <= index + 1 ; i++)
		help = help->next;
	free(traveller->next);
	traveller->next = help;
	return (1);
}
