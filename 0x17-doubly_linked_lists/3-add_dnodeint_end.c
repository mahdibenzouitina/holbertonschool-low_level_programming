#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint_end - new node at the end of list.
 * @head: head
 * @n: in
 *
 * Return: pointer
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *p;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
new->prev = NULL;
return (new);
}
p = *head;
while (p->next)
p = p->next;
p->next = new;
new->prev = p;
return (new);
}

