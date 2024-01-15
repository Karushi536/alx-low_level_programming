#include "lists.h"

/**
 * add_dnodeint_end - it adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *m;
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	m = *head;

	if (m != NULL)
	{
		while (m->next != NULL)
			m = m->next;
		m->next = newnode;
	}
	else
	{
		*head = newnode;
	}

	newnode->prev = m;

	return (newnode);
}
