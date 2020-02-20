#include "holberton.h"
#include <stdio.h>
/**
 * _strncpy - copies a string
 * @dest: string 1
 * @src: string
 * @n: variable
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0' && i < n; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
