#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - get the node at the index
 * @head: head pointer parameter
 * @index: index of the node
 * Return: the node at the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	unsigned int num;
	listint_t *help;

	num = 0;
	help = head;
	while (help)
	{
		num++;
		help = help->next;
	}
	if (index > num - 1)
		return (NULL);
	help = head;
	for (i = 0; i < index; i++)
		help = help->next;
	return (help);
}
