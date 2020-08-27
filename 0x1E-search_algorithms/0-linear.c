#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search -  function that searches for a value in an array of integers
 *@array: pointer to the first element of the array
 *@size: the number of elements in array
 *@value: is the value to search for
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
unsigned int i;

if (array == NULL)
return (-1);
for (i = 0; i < size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
