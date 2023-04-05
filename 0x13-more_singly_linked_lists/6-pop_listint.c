#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - it deletes the head node of listint_t in the linked list
 * @head: pointer to a pointer to the head node in the linked list
 * Return: returns the data of the head node of the linked list
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	if (*head == NULL)
		return (0);

	node = *head;
	data = node->n;
	*head = (*head)->next;
	free(node);

	return (data);
}
