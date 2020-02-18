#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - value of two integers
 * @a: integer1
 * @b: integer2
 *
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
