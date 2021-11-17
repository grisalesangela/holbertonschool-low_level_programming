#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head pointer of list
 */

void free_listint(listint_t *head)
{
	if (head && head->next)
		free_listint(head->next);
	free(head);
}
