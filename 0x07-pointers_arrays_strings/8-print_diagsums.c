#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 *@a: int
 *@size : int
 *
 */
void print_diagsums(int *a, int size)
{
int b, c, d = 0, e = 0;
for (b = 0 ; b < size ; b++)
{
for (c = 0 ; c < size ; c++)
{
if (b == c)
d += *a;
if ((b + c) == (size - 1))
e += *a;
a += 1;
}
}
printf("%d, %d\n", d, e);
}
