#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
char *ar;
int i;
int j;
int a;
int b;
if (s1 == 0 || s2 == 0)
return ("");
for (a = 0; s1[a] != '\0'; a++)
;
for (b = 0; s2[b] != '\0'; b++)
;
ar = malloc(a + b + 1);
if (ar == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
ar[i] = s1[i];
for (j = 0; s2[j] != '\0'; j++)
{
ar[i] = s2[j];
i++;
}
{
ar[i + j] = s2[j];
}
return (ar);
}
