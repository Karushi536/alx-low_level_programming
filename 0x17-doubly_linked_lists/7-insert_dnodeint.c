#include "lists.h"

/**
 * insert_dnodeint_at_index - it inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *m;
	unsigned int r;

	newnode = NULL;
	if (idx == 0)
		newnode = add_dnodeint(h, n);
	else
	{
		m = *h;
		r = 1;
		if (m != NULL)
			while (m->prev != NULL)
				m = m->prev;
		while (m != NULL)
		{
			if (r == idx)
			{
				if (m->next == NULL)
					newnode = add_dnodeint_end(h, n);
				else
				{
					newnode = malloc(sizeof(dlistint_t));
					if (newnode != NULL)
					{
						newnode->n = n;
						newnode->next = m>next;
						newnode->prev = m;
						m->next->prev = newnode;
						m->next = newnode;
					}
				}
				break;
			}
			m = m->next;
			r++;
		}
	}

	return (newnode);
}
