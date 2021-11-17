#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data (n)
 * @head: pointer to head pointer of list
 * Return: head's node data, or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int ret;
	listint_t *aux;

	if (head == NULL || *head == NULL)
		return (0);
	ret = (*head)->n;
	aux = *head;
	*head = (*head)->next;
	free(aux);
	return (ret);
}
