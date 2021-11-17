#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to head pointer of listint
 * @n: intiger to add
 * Return: pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *aux;

	aux = (listint_t *)malloc(sizeof(listint_t));
	if (aux == NULL)
		return (NULL);
	aux->n = n;
	aux->next = *head;
	*head = aux;
	return (aux);
}
