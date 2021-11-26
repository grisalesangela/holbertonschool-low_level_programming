#include "lists.h"

/**
 * listint_len - counts number of nodes of a list_int list
 * @h: head of listint_t list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int nodes;

	nodes = 0;
	while (h && h->next != NULL)
	{
		nodes += 1;
		h = h->next;
	}
	if (h)
		nodes += 1;
	return (nodes);
}
