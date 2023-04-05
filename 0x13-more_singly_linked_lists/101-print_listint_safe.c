#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - a function that print data in a linked list
 * @head: pointer to the head node
 * Return:number of node in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num;
	const listint_t *traveller;
	const listint_t *help;

	if (head == NULL)
		exit(98);
	num = 0;
	traveller = head;
	help = head;
	for (; traveller != NULL;)
	{
		num++;
		printf("[%p] %d", (void *)traveller, traveller->n);
		printf("\n");
		traveller = traveller->next;
		if (traveller == NULL)
			exit(98);
		else
		{
			help = help->next;
			traveller = traveller->next;
		}
		if (traveller == help)
			exit(98);
	}
	return (num);
}
