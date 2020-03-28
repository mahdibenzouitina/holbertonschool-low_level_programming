#include "holberton.h"
#include <stdio.h>
/**
 * get_endianness -  checks the endianness
 *
 * Return: 1 && 0
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
