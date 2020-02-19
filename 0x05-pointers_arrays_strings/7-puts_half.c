#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - print the half of the string
 * @str: string
 *
 */
void puts_half(char *str)
{
int length;
int half;
int i;
for (length = 0; str[length] != '\0'; length++)
;
half = (length + 1) / 2;
for (i = half; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
