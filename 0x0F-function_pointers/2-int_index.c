#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: array
 * @size: size
 * @cmp: function
 *
 * Return: n
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int n = 0;
if ((array == NULL || cmp == NULL || size <= 0))
return (-1);
for (; n < size; n++)
if (cmp(array[n]))
return (n);
return (-1);
}
