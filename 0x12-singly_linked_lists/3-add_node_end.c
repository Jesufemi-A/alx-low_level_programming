#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end
 * @head: head pointer
 * @str: string parameter
 * Return: returns a node at the end of a list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *traveller;

	if (str != NULL)
	{
		end_node = malloc(sizeof(list_t));
		if (end_node == NULL)
			return (NULL);

		end_node->str = strdup(str);
		end_node->len = s_len(str);
		end_node->next = NULL;

		if (*head != NULL)
		{
			traveller = *head;
			while (traveller->next != NULL)
				traveller = traveller->next;
			traveller->next = end_node;
			return (end_node);
		}
		else
		{
			*head = end_node;
			return (*head);
		}
	}
	return (NULL);
}

/**
 * s_len - finds length of a string
 * @s: string parameter
 * Return: returns length
 */

int s_len(const char *s)
{
	int a = 0;

	for (; *s; s++)
		a++;
	return (a);
}
