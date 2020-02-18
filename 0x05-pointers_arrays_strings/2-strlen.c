#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - length of a string
 * @s: char
 *
 * Return: strlen(s)
 */
int _strlen(char *s)
{
int a = 0;
while (*s != '\0')
{
a++;
s++;
} 
return (a);
}
