#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - returns the node of a list.
 * @head: head
 * @index: index
 * Return: NULL
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
if (head == NULL)
return (NULL);
if (index == 0)
return (head);
while (head)
{
if (index == i)
return (head);
head = head->next;
i++;
}
return (NULL);
}
