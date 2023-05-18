#include "lists.h"
#include <stdio.h>


/**
 *  print_dlistint - its a function that prints a doubly linked list
 *  @h: head of the doubly linked list
 *  Return: returns number of node in the list
 */
size_t print_dlistint(constdlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
