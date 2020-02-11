#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers
 * @n: variable
 *
 * Return: result
 */
void print_to_98(int n)
{
int a;
if (n == 98)
{
printf("%\n", n);
}
else
if (n > 98)
{
for (a = n; a >= 98; a++)
{
printf("%d", a);
if (a > 98)
printf(", ");
}
printf("\n");
}
else
{
for (a = n; a <= 98; a++)
{
printf("%d", a);
if (a < 98)
printf(", ");
}
printf("\n");
}
} 
