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
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (len = i; len >= 0; len--)
	{
		if (b[len] == 49)
			sum = sum + m;
		m = m * 2;
	}
	return (sum / 2);
}
