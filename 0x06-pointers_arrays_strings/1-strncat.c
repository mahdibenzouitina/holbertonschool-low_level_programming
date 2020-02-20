#include "holberton.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: first array
 * @src: second array
 * @n: gjgh
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; src[j] != '\0' && n > j; j++)
{
dest[i + j] = src[j];
}
return (dest);
}
