#include "holberton.h"
#include <stdio.h>
/**
 * print_triangle - print square
 * @size: variable
 *
 */
void print_triangle(int size)
{
int a;
int b;
for (a = 1; a <= size; a++)
{
for (b = 1; b <= size; b++)
{
if (b <= size - a)
_putchar (' ');
else
_putchar ('#');
}
_putchar('\n');
}
if (size <= 0)
_putchar ('\n');
}
