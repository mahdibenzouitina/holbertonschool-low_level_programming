#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: first array
 * @src: second array
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}

return (dest);
}
