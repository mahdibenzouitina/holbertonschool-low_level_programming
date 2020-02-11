#include "holberton.h"
#include <stdio.h>
/**
 * _abs - the absolute value of an integer
 * @i: absolute variable
 * Return: absolute value
 */
int _abs(int i)
{
if (i < 0)
return (i * -1);
else
return (i);
}
