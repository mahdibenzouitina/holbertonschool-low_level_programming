#include "holberton.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @i: char
 *
 * Return: char
 */
char *string_toupper(char *i)
{
int j;
for (j = 0; i[j] != '\0'; j++)
{
if (i[j] >= 'a' && i[j] <= 'z')
i[j] = i[j] - 32;
}
return (i);
}
