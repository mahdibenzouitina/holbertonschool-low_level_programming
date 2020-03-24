#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - return sum
 * @head: head
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	unsigned int i = 0;


	if (head == NULL)
		return (0);
	for (; head != NULL; i++)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
