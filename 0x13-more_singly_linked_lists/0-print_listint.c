#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to lists of elements
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
int nodes = 0;

while (h != NULL)
{
	printf("%d\n", h->n);
	nodes++;
	h = h->next;
}
return (nodes);
}
