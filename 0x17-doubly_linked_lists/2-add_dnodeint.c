#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint - add new node
 * @head: head
 * @n: int
 *
 * Return: pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->next = *head;
new->n = n;
new->prev = NULL;
if (*head)
(*head)->prev = new;
*head = new;
return (*head);
}
