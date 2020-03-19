#include "holberton.h"
#include <stdio.h>
/**
 * sqrt_ - natural square root of a number
 * @n: number
 * @i: var
 *
 * Return: num
 */
int sqrt_(int n, int i)
{
	if (i * i  != n && i < n)
		return (sqrt_(n, i + 1));
	else if (i * i == n)
		return (i);
	else
		return (-1);
}
/**
 * _sqrt_recursion - natural square root of num
 * @n: num
 *
 * Return: num
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (-1);
	else
		return (sqrt_(n, 1));
}
