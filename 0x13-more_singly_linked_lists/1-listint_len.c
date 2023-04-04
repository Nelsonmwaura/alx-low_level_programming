#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - number of nodes in the linked list
 * @h: this is a pointer
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
