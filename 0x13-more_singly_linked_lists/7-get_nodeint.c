#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - retuens the nth node of a listint_t linked list
 * @index: index of the node to retrieve
 * @head: pointer to the first node of the list
 * Return: pointer to the nth node or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i;

	for (i = 0; i < index && node != NULL; i++)
	{
		node = node->next;
	}
	return (node);
}
