#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - cal the sum of the data
 * @head: head pointer to the node
 * Return: the sum of data in list
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *help;

	if (head == NULL)
		return (0);
	sum = 0;
	help = head;
	while (help)
	{
		sum = sum + help->n;
		help = help->next;
	}
	return (sum);
}
