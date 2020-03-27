#include "holberton.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: int
 * @index: index
 *
 * Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	unsigned int c;

	if (n == 0 && index == 0)
	{
		i = 0;
		return (i);
	}
	if (index > 31)
		return (-1);
	for (c = 0; n; c++)
	{
		if (c == index)
		{
			i = n & 1;
			return (i);
		}
		n = n >> 1;
	}
	if (n == 0)
	{
		i = 0;
	}
	return (i);
}
