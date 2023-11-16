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

    return node_count;
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

    n = list_len(head);
    printf("-> %lu elements\n", n);

    free(new->str);
    free(new);

    return (0);
}
