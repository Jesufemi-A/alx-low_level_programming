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
	listint_t *back_node;
	listint_t *help;

	help = *head;
	back_node = malloc(sizeof(listint_t));
	if (back_node == NULL)
		return (NULL);
	back_node->n = n;
	back_node->next = NULL;
	if (*head == NULL)
	{
		*head = back_node;
		return (back_node);
	}
	while (help->next != NULL)
		help = help->next;
	help->next = back_node;
	return (back_node);
}

