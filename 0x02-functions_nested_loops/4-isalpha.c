#include "holberton.h"
#include <stdio.h>
/**
 * _isalpha - alphabetic
 * @c: variable
 *
 * Return: 1_if_lowercase_or_uppercase or 0_otherwise
 */
int _isalpha(int c)
{
int a = c;
if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
return (1);
else
return (0);
}
