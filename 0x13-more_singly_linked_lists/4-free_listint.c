#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - free listint_t
 * @head: double pointer
 */

void free_listint(listint_t *head)
{
while (head != NULL)
{
listint_t *next = head->next;
free(head);
head = next;
}
}
