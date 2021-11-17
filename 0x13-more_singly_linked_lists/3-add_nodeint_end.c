#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to head pointer of the list
 * @n: intiger to add
 * Return: addres of the new element or NULL if fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux, *ret;

	ret = (listint_t *)malloc(sizeof(listint_t));
	if (ret == NULL)
		return (NULL);
	ret->n = n;
	ret->next = NULL;
	aux = *head;
	while (aux && aux->next)
		aux = aux->next;
	if (aux == NULL)
	{
		*head = ret;
		return (ret);
	}
	aux->next = ret;
	return (ret);
}
