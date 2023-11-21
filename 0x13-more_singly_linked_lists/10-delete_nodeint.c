#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index 
 * index of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (!head || !(*head))
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!current)
			return (-1);
		current = current->next;
	}

	if (!current || !(current->next))
		return (-1);

	temp = current->next->next;
	free(current->next);
	current->next = temp;

	return (1);
}
