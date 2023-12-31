#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the nodes position
 */
size_t print_listint(const listint_t *h)
{
	size_t node_position = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_position++;
	}

	return (node_position);
}


