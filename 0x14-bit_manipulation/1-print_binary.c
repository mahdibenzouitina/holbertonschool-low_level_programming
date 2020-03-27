#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - print binary
 * @n: int
 *
 * Return: int
 */
void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
	}
	else
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
