#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a double pointer parameter
 * @str: a string parameter
 * Return: returns the address of the new element, or NULL if it failed
 *
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str != NULL && head != NULL)
	{
		new_node = (list_t *) malloc(sizeof(list_t));
		if (new_node != NULL)
		{
			new_node->str = strdup(str);
			new_node->len = s_len(str);
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		else
			return (NULL);
	}
	return (0);

}

/**
 * s_len - return the length of a string
 * @s: string parameter
 * Return: returns the length
 */


int s_len(const char *s)
{
	int a = 0;

	for (;*s;s++)
	{
		a++;
	}
	return (a);
}
