#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a character
 * @s: char
 * @c: char
 *
 * Return: hjgj
 */
char *_strchr(char *s, char c)
{
while (*s++)
{
if (*s == c)
return (s);
}
return (0);
}
