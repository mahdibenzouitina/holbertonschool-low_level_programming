#include "holberton.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: char
 */
int _strcmp(char *s1, char *s2)
{
int i;
int j;
for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
for (i = 0; i < j; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}
return (0);
}
