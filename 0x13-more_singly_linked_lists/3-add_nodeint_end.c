#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - add node at the end
 * @head: double head pointer
 * @n: data in node
 * Return: the address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *back;
	listint_t *help;

	help = *head;
	back = malloc(sizeof(listint_t));
	if (back == NULL)
		return (NULL);
	back->n = n;
	back->next = NULL;
	while (help->next != NULL)
		help = help->next;
	help->next = back;
	return (back);
}

