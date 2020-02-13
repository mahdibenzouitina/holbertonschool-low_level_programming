#include "holberton.h"
#include <stdio.h>
/**
 * print_line - print line
 * @n: variable
 *
 */
void print_line(int n)
{
int a;
a = 0;
while (a < n)
{
_putchar ('_');
a++;
}
_putchar ('\n');
}
