#include "lists.h"

/**
 * listint_len - counts number of nodes of a list_int list
 * @h: head of listint_t list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t countnodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		h = h->next;
		countnodes++;
	}
	return (countnodes);
}
