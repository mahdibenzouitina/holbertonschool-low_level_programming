#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: num
 *
 * Return: num
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i;
	unsigned int sum = 0, m = 1;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);
	}
	for (i = len; i >= 0; i--)
	{
		if (b[i] == 49)
			sum = sum + (m / 2);
		m = m * 2;
	}
	return (sum);
}
