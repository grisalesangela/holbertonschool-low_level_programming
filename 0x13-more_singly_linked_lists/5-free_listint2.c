#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: pointer to head pointer of the list
 */

void free_listint2(listint_t **head)
{
	if (head && (*head) && (*head)->next)
		free_listint2(&((*head)->next));
	if (head && (*head))
	{
		free((*head));
		(*head) = NULL;
	}
}
