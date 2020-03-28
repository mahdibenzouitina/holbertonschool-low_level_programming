#include "holberton.h"
#include <stdio.h>
/**
 * flip_bits - count num off diff bits
 * @n: first
 * @m: second
 *
 * Return: num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;
	unsigned long int i;

	i = n ^ m;

	while (i)
	{
		c += i & 1;
		i = i >> 1;
	}
	return (c);
}
