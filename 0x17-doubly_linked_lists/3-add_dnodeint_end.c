#include  "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end -  a function that adds a node at the end of the list
 * @head: the double pointer to the head
 * @n: the data to add to the node
 * Return: returns a pointer to the new element or NULL when fails
 */
dlistint_t *add_dnoteint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *temp = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);

	}
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (!head || !(*head))
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;

		new_node->prev = temp;
		temp->next = new_node;

		return (new_node);
	}
	return (NULL);
}
