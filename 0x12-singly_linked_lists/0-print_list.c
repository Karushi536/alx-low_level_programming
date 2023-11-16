#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - Print all elements of a linked list
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		node_count++;
	}
	return (node_count);
}

int main(void)
{
	list_t *head;
	list_t *new;
	list_t hello = {"World", 5, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}

	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;
	head = new;

	n = print_list(head);
	printf("-> %lu elements\n", n);

	printf("\n");

	free(new->str);
	new->str = NULL;
	n = print_list(head);
	printf("-> %lu elements\n", n);

	free(new);

	return (0);
}
