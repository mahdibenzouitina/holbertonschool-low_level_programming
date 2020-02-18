#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - rverse a string
 * @s: string
 *
 */
void print_rev(char *s)
{
int a = 0;
int b;
for (a = 0; s[a] != '\0';)
a++;
for (b = a - 1; b >= 0; b--)
_putchar(s[b]);
_putchar ('\n');
}
