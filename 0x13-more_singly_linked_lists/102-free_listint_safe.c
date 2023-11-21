#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 * The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *next;

	current = *h;
	while (current != NULL)
	{
		size++;
		next = current->next;
		free(current);
		if (current <= next)
		{
			*h = NULL;
			break;
		}
		current = next;

	}

	*h = NULL;

	return (size);
}
