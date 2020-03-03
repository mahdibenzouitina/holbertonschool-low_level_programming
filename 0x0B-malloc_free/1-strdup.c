#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - return a pointer
 * @str: char
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
char *ar;
int i;
int j;
if (str == 0)
return (0);
for (i = 0; str[i] != '\0'; i++)
;
ar = malloc(i + 1);
if (ar == 0)
return (0);
for (j = 0; j < i; j++)
ar[j] = str[j];
return (ar);
}
