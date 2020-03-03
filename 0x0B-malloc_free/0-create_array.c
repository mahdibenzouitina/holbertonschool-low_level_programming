#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of char
 * @size: int
 * @c: char
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
unsigned int n;
char *ar;
if (size == 0)
return (0);
ar = malloc (size * sizeof(char));
for (n = 0; n < size ; n++)
{
ar[n] = c;
}
return (ar);
 if (ar == 0)
   return (0);
}

