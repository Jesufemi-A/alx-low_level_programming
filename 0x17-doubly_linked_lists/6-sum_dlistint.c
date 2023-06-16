#include "lists.h"

/**
 * sum_dlistint - add data in DLL
 * @head: point to the first node
 * Return: Total sum of all data or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
