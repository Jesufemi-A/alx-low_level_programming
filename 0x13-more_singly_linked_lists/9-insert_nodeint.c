#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert a new node at idx index
 * @head: double head pointer position
 * @idx: index of new node
 * @n: data of new node
 * Return: the newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, length;
	listint_t *help, *traveller, *new_node;

	length = 0;
	help = *head;
	traveller = *head;
	while (help)
	{
		length++;
		help = help->next;
	}
	if (idx > length)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	help = *head;
	new_node->n = n;
	for (i = 0; i <= idx; i++)
		traveller = traveller->next;
	for (i = 0; i < idx; i++)
		help = help->next;
	if (idx == length - 1)
	{
		help->next = new_node;
		new_node = NULL;
		return (new_node);
	}
	help->next = new_node;
	new_node->next = traveller;
	return (new_node);
}
