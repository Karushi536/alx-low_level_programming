#include "lists.h"

/**
 * sum_dlistint - it returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int ttl_sum;

	ttl_sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			ttl_sum += head->n;
			head = head->next;
		}
	}

	return (ttl_sum);
}
