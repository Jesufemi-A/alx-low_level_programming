#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node
 * @head: head double pointer
 * Return: the data of deleted head node
 */

int pop_listint(listint_t **head)
{
	listint_t *help;
	int data;

	data = 0;
	if (*head == NULL)
		return (0);
	help = *head;
	data = help->n;
	help = help->next;
	free(*head);
	*head = help;
	return (data);
}
