#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a
 * listint_t linked list
 * @head: head pointer to list
 * Return: sum of all the data of the list
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head && head->next)
	{
		sum += head->n;
		head = head->next;
	}
	if (head)
		sum += head->n;
	return (sum);
}
