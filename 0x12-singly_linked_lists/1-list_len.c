#include "lists.h"

/**
 * list_len -  function that returns the number of elements in a linked list
 * @h: parameter to receive header pointer
 * Return: returns the number of elements in a linked list_t list
 *
 */


size_t list_len(const list_t *h)
{
	int num = 0;
	list_h traveller = h;

	while (traveller != NULL)
		num = num + 1;
	return (num);

}
