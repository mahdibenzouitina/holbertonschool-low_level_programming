#include "holberton.h"
#include <stdio.h>
/**
 * more_numbers - print 10 times numbers from 0 to 14
 *
 */
void more_numbers(void)
{
int i;
int num;
for (i = 0; i <= 9; i++)
{
for (num = 0; num <= 14; num++)
{
if (num >= 10)
_putchar(num / 10 + '0');
_putchar(num % 10 + '0');
}
_putchar ('\n');
}
}

