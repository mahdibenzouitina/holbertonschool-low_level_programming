#include <stdio.h>
#include "holberton.h"
/**
 * _islower - lower
 * @c: Variable
 *
 * Return: 0_if_otherwise 1_if_lowercase
 */
int _islower(int c)
{
int a = c;
if (a >= 97 && a <= 122)
return (1);
else
return (0);
}
