#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - add a new node at the beginning of listint_t
 * @n: integer value
 * @head: a pointer to the head of the listint_t
  * Return: it return the address of the element and NULL when fuction fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

if (head == NULL)
return (NULL);
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}
