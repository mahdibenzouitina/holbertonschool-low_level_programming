#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatednates two strings
 * @s1: first string
 * @s2: second string
 * @n: int
 * 
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  unsigned int i, j, a, b;
char *ar;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (a = 0; s1[a] != '\0'; a++)
;
for (b = 0; s2[b] != '\0'; b++)
;
ar = malloc((a + n + 1) * sizeof(char));
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
ar[i] = '\0';
return (ar);
}
