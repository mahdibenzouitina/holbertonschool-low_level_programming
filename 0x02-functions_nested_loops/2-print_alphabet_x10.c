#include "holberton.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print x10
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
int i;
for (i = 1; i <= 10; i++)
{
char n;
for (n = 'a'; n <= 'z'; ++n)
_putchar(n);
_putchar('\n');
}
}
