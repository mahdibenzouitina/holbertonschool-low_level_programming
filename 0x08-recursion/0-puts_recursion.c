#include "holberton.h"
#include <stdio.h>
/**
 * _puts_recursion - print a string
 * @s: string
 *
 */
void _puts_recursion(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
_putchar(s[i]);
_putchar('\n');
}
