#include "holberton.h"
#include <stdio.h>
/**
 * _isdigit - check for a digit
 * @c: variable
 *
 *Return: 1_if_digit 0_otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
