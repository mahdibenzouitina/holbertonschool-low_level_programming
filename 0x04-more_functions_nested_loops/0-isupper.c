#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - Uppercase character.
 * @c: varible
 *
 * Return: 1 if uppercase 0 if otherwise
 */
int _isupper(int c)
{
int a;
a = c;
if (a >= 65 && a <= 90)
{
return (1);
}
else
{
return (0);
}
}
