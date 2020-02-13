#include "holberton.h"
#include <stdio.h>
/**
 * print_diagonal - print diagonal
 * @n: variable
 *
 */
void print_diagonal(int n)
{
int a = 0;
int b = 0;
while (a < n && n >= 1)
{
while (a > b)
{
_putchar(' ');
b++;
}
a++;
_putchar('\\');
_putchar('\n');
b = 0;
}
if (n <= 0)
_putchar('\n');
}
