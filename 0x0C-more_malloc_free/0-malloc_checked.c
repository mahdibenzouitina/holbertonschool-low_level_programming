#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: int
 *
 * Return: i
 */
void *malloc_checked(unsigned int b)
{
void *i;
i = malloc(b);
if (i == NULL)
exit(98);
return (i);
}
