#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - print last digit
 * @i: variable
 *
 * Return: last digit
 */
int print_last_digit(int i)
{
int g = (i % 10);
if (g < 0)
g = g * -1;
_putchar(g + '0');
return (g);
}
