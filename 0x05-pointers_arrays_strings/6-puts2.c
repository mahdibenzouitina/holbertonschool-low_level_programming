#include "holberton.h"
/**
 * puts2 - print every other character
 * @str: string
 *
 */
void puts2(char *str)
{
int a, length = 0;
while (str[length] != '\0')
length++;
for (a = 0; a <= length - 1; a += 2)
{
if (a % 2 == 0)
{
_putchar(str[a]);
}
}
_putchar('\n');
}
