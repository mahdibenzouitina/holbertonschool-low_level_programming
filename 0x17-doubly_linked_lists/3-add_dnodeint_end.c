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
if (head == NULL)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
new->n = n;
new->next = NULL;
if (!(*head))
{
*head = new;
new->prev = NULL;
}
else
{
p = *head;
while (p->next)
{
p = p->next;
}
p->next = new;
}
return (new);
}

