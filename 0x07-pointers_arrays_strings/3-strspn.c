#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: char
 * @accept: char
 * Return: fdhg
 */
unsigned int _strspn(char *s, char *accept)
{
int a = 0;
int b;
while (*(s + a))
{
b = 0;
while (*(accept + b))
{
if (*(s + a) == *(accept + b))
break;
b++;
}
if (!*(accept + b))
return (a);
a++;
}
return (a);
}
