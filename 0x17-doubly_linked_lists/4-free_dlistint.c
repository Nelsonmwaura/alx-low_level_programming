#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - a function that free a doubly linked list
 * @head: pointer to the head of the doubly linked list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
