#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - function to attach a new node
 * @head: pointer to the header of DLL
 * @n: data to be added to the node
 * Return: If fail, NULL, else point to the node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
