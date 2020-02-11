#include "holberton.h"
#include <stdio.h>
/**
 * times_table -  prints the 9 times table starting with 0
 *
 * Return: 9 times table
 */
void times_table(void)
{
int a;
int b;
int c;
int d;
int mult;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
mult = a * b;
if (mult >= 10)
{
c = mult / 10;
d = mult % 10;
_putchar(' ');
_putchar(c + '0');
_putchar(d + '0');
}
else
{
if (b != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(mult + '0');
}
if (b != 9)
_putchar(',');
if (b == 9)
_putchar('\n');
}
}
}
