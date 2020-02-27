#include "holberton.h"
#include <stdio.h>
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 */
int _strlen_recursion(char *s)
{
int i;
if (*s != '\0')
{
s++;
i=(1+(_strlen_recursion(s)));
} 
return (i);
}
