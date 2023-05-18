#include "lists.h"

/**
 * dlistint_len - a function that gets the length of the list
 * @h: the head of the list
 * Return: returns the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
