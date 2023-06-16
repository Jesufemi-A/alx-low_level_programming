#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - purpose is to free DLL
 * @head: first node or head node
 * Return: returns nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
