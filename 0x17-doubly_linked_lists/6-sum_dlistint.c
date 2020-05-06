#include "lists.h"
/**
 * sum_dlistint - sum off all
 * @head: head
 *
 * Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
int i = 0;
if (head == NULL)
return (0);
while (head)
{
i += head->n;
head = head->next;
}
return (i);
}
