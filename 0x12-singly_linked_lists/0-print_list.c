#include "lists.h"
#include <stdio.h>
/**
 * print_list - Print all elements of a linked list
 * @h: Pointer to the head of the linked list
 *
 * This function prints the elements of a linked list, including the length
 * and content of each node's string. If a string is NULL, it prints [0] (nil).
 *
 * Return: The number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t nide_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", h->len, h->str);
		}
		h = h->next;
		node_count++
	}
	return (node_count);
}
