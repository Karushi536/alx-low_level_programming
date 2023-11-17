#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
