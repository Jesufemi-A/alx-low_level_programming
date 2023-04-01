#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a double pointer parameter
 * @str: a string parameter
 * Return: returns the address of the new element, or NULL if it failed
 *
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	new_node = (list_t *) malloc(sizeof(list_t));
	new_node->str = strdup(str);
	new_node->next = head;
	head = new_node;
	if (head != NULL)
		return (new_node);
	else
		return (NULL);

}
