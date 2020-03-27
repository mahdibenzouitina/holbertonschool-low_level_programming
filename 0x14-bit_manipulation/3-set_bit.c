#include "holberton.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1
 * @n: int
 * @index: index
 *
 * Return: value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
