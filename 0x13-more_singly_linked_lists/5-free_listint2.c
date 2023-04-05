#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees listsint2 in list
 * @head: a double pointer to listint2 in list
 */

void free_listint2(listint_t **head)
{
	listint_t *new = *head;

	while (new != NULL)
	{
		listint_t *next = new->next;

		free(new);
		new = next;
	}
	*head = NULL;
}
