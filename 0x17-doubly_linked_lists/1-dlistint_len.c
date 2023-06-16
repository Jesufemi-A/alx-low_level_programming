#include "lists.h"

/**
 * dlistint_len - Finds the num of node in DLL
 * @h: Pointing to first node in the DLL
 * Return: num of node in DLL
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
