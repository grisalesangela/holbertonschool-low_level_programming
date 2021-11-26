#include "lists.h"
/**
 * listint_len - counts number of nodes of a list_int list
 * @h: head of listint_t list
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	int iterador = 0;

	for (; h; iterador++)
	{
		h = h->next;
	}
	return (iterador);
}
