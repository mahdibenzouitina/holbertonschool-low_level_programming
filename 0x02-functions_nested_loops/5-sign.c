#include "holberton.h"
#include <stdio.h>
/**
 * print_sign - sign
 * @n: variable
 *
 * Return: 1_if_positive 0_if_zero -1_if_negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
