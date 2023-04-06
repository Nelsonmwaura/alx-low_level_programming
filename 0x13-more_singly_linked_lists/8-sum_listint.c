#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node in the list
 * Return: returns sum of all the data (n)
 * of the lists and returns 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
