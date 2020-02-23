#include "holberton.h"
#include <stdio.h>
/**
 * leet - encode string
 * @c: char
 *
 * Return: char
 */
char *leet(char *c)
{
char str1[] = "aAeEoOtTlL";
char str2[] = "4433007711";
int i;
int j;
for (i = 0; c[i] != '\0'; i++)
for (j = 0; str1[j] != '\0'; j++)
if (c[i] == str1[j])
c[i] = str2[j];
return (c);
}
