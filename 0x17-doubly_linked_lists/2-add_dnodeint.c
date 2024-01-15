#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *m;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	m = *head;

	if (m != NULL)
	{
		while (m->prev != NULL)
			m = m->prev;
	}

	newnode->next = m;

	if (m != NULL)
		m->prev = newnode;

	*head = newnode;

	return (newnode);
}
